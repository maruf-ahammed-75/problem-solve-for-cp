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
    vector<int>a(n);
    vector<int>b;
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        sum += a[i];
    }
    b= a;
    sort(full(b));
    int  mx1 =  b[n-1];
    int  mx2 = b[n-2];

    int ans =0;
    vector<int>res;
    for(int i =0 ; i<n ; i++){
        int val = mx1;
        if(a[i]==mx1) val = mx2;

        sum-=a[i];
        if(sum==val*2){
            res.push_back(i+1);
        }
        sum+=a[i];
    }
    cout<<res.size()<<"\n";
    for(int i=0 ; i<res.size() ; i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";


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
