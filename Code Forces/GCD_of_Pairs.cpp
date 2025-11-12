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

bool isboolPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void I_Am_Here() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    map<int,int>mp1,mp2;
    int mx = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mx = max(mx,a[i]);
        mp1[a[i]]++;
    }

    for(int i=0;i<n;i++) {
        cin>>b[i];
        mx = max(mx,b[i]);
        mp2[b[i]]++;
    }
    vector<int>countA(mx+1,0), countB(mx+1,0);
    
    for(int i=2 ; i<=mx ; i++){
        for(int d=i ; d<=mx ; d+=i){
            countA[i] += mp1[d];
            countB[i] += mp2[d];
        }
    }
    int ans=0;
    vector<int>ex(mx+1,0);
    for(int i=mx ; i>=2 ; i--){
        int total = countB[i]*countA[i];
        for(int d = i*2 ; d<=mx ; d+=i){
            total -= ex[d];
        }
        ex[i] = total;
        if(isboolPrime(i)){
            ans += total;
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