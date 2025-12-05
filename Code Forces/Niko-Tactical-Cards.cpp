#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;
int n;
vector<int> a, b;
vector<int> s(100005,0);
int Findmax(int i){
    if(i==n){
        return s[i];
    }
    
    int old = s[i];

    //red 
    s[i+1]=old - a[i];
    int red = Findmax(i+1);
    
    //blue
    s[i+1] = b[i] - old;
    int blue = Findmax(i+1);
    
    return max(red,blue);
}

void I_Am_Here() {
    cin>>n;
    a = vector<int>(n);
    b = vector<int>(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    cout<<Findmax(0)<<endl;
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
