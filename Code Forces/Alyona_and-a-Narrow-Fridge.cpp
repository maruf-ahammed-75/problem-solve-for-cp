#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n;
int h ;
vector<int> a;

bool check(int x){
    // cout<<x<<endl;
    int height = h;
    vector<int> b = a;
    
    sort(b.begin(),b.begin()+x ,greater<int>());

    // for(int i=0 ; i<x ; i++){
    //     cout<<b[i]<<' ';
    // }

    // cout<<endl;
    for(int i=0 ; i<x ; i+=2){
        height -= b[i];
    }
    
    // cout<<height<<endl;cout<<endl;
    return height>=0;
}

void I_Am_Here() {
    
    cin>>n>>h;
    a = vector<int>(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int ans = 0; 
    int h = n;
    int l = 0;
    while(l<=h){
        int mid = (l+h)/2;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            h = mid - 1;
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
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
