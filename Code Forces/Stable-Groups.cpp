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
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(full(a));

    vector<int>b;

    for(int i=1 ; i<n ; i++){
        if(abs(a[i]-a[i-1])>x){
            b.push_back(a[i]-a[i-1]-1);
        }
    }



    sort(full(b));

    // for(auto i :b){
    //     cout<<i<<' '; 
    // }
    // cout<<endl;


    int i=0;
    int remove=0;
    while(k>0 && i<b.size()){
        int need = (b[i]/x);
        // cout<<"need: "<<need<< ' '<<b[i]<<' ';
        if(need<=k){
            k-=need;
            remove++;
        }
        else{
            break;
        }
        // cout<<"  k: "<<k<<" remove: "<<remove<<endl;
        i++;
       
    }
    cout<<b.size()-remove+1<<endl;
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
