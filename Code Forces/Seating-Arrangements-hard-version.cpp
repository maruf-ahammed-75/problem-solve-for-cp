#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
#define endl '\n'
#define full(x) x.begin(),x.end()
using namespace std;
void Solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>a(m*n);
    for(int i=0 ; i<n*m ; i++){
        cin>>a[i].ff;
        a[i].ss=i+1;
    }
    vector<vector<pair<int, int>>> b(m, vector<pair<int, int>>(m));
    sort(full(a));
    int k=0;
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<m ; j++){
            b[i][j].ff=a[k].ff;
            b[i][j].ss=a[k].ss;
            k++;
        }
    }

    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<m ; j++){
           cout<<b[i][j].ff<<' '<<b[i][j].ss<<endl;
        }
        cout<<endl;
    }

    int ans = 0;

    for(int i=0 ; i<n ; i++){
        sort()
    }


}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int ts = 1;
    cin >> ts;
    while (ts--)
    {
        Solve();
    }

    return 0;

    
}
