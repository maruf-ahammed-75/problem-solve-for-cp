#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool trav(vector< vector<ll> > &edges, vector< bool > &visited, ll start, ll end, ll u){
    visited[start]=true;
    for(ll e : edges[start]){
        if(visited[e])continue;
        if(e==end)return true;
        if(trav(edges, visited, e, end, u))return true;
    }
    return false;
}

void trav_n(vector< vector<ll> > &edges, vector< bool > &visited, ll start, vector<ll> &all_n){
    visited[start]=true;
    for(ll e : edges[start]){
        if(visited[e])continue;
        all_n.push_back(e);
        trav_n(edges, visited, e, all_n);
    }
}

ll mindist(vector<ll> v1, vector<ll> v2){
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    ll i=0,j=0;
    ll mind = LLONG_MAX;
    ll sz1= v1.size(), sz2= v2.size();
    while(i<sz1 && j<sz2){
        mind = min(mind , abs(v1[i]-v2[j]));

        if(v1[i]<v2[j])i++;
        else j++;
    }
    return mind;
}

int main()
{

    ll t,n,m,q,u,v, t_e, t_t;

    cin>>t;
    t_t=t;

    while(t--){
        cout<<"Case "<<t_t - t<<":\n";
        cin>>n;
        vector< vector<ll> > edges(n+1, vector<ll>() );
        vector< vector<ll> > edges_r(n + 1, vector<ll>());
        vector< bool > visited(n+1,false);

        cin>>m;
        t_e = m;

        while(t_e--){
            cin>>u>>v;
            edges[u].push_back(v);
            edges_r[v].push_back(u);
        }

        cin>>q;
        t_e = q;

        while(t_e--){
            cin>>u>>v;
            vector<ll> v1 = vector<ll>(), v2 = vector<ll>();
            if(trav(edges, visited,u,v,u)){
                for(ll i=0;i<n;i++)visited[i]=false;
                cout<<"0\n";
            }
            else{
                for(ll i=0;i<n;i++)visited[i]=false;
                v1.push_back(u);
                trav_n(edges, visited, u, v1);
                for(ll i=0;i<n;i++)visited[i]=false;
                v2.push_back(v);
                trav_n(edges_r, visited, v, v2);

                ll mind = mindist(v1,v2);

                cout<<mind<<"\n";
            }
        }

    }

    return 0;
}