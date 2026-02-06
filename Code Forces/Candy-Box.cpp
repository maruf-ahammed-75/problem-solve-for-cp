#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here() {
    
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0,x ; i<n ; i++){
        cin>>x;
        m[x]++;
    }

    // multiset<int>s;
    // for(auto x:m)s.insert(x.ss);

    // int ans =0;
    // int need = n;
    // while(!s.empty() && need>0){
    //     int get = *s.rbegin();
    //     if(get>=need){
    //         ans += need;
    //         need--;
    //     }
    //     else{
    //         ans += get;
    //         need = get-1;
    //     }
    //     s.erase(s.find(get));
    // }
    // cout<<ans<<endl;

    //--------------using priority  queue-----------

    priority_queue<int>q;
    for(auto i:m){
        q.push(i.ss);
    }
    int need = n;
    int ans =0;

    while(!q.empty() && need>0){
        int get = q.top();
        q.pop();
        if(get>=need){
            ans += need;
            need--;
        }
        else{
            ans += get;
            need = get-1;
        }
    }
    cout<<ans<<endl;

}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
