#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;
void I_Am_Here() {
    ll n,m,l;
    cin>>n>>m>>l;
    vector<pair<ll,ll>>a(n);
    vector<pair<ll,ll>>b(m);
    for(int i=0 ; i<n ; i++){
        cin>>a[i].ff>>a[i].ss;
    }
    // for(auto i:a){
    //     cout<<i.ff<<' '<<i.ss<<endl;
    // }
    
    for(int i=0 ; i<m ; i++){
        cin>>b[i].ff>>b[i].ss;
    }
    ll power=1;
    int j=0;
    bool flag=1;
    ll ans=0;
    priority_queue<ll>pq;

    for(int i=0 ; i<n ; i++){
        while(j<m && a[i].ff>b[j].ff){
            pq.push(b[j].ss);
            j++;
        }
        ll dif = a[i].ss-a[i].ff+2;
        while(pq.size()>0 && power < dif){
            power+=pq.top();
            pq.pop();
        }
        if(power < dif){
            cout<<-1<<endl;
            return;
        }
    }
    while(j<m){
        pq.push(a[j].ss);
        j++;
    }
    cout<<m-pq.size()<<endl;

}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
