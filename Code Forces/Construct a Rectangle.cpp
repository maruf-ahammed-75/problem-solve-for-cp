#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int x,b,c;
    cin>>x>>b>>c;
    ll sum=x+b+c;
    int odd=0;
    if(x%2)odd++;
    if(b%2)odd++;
    if(c%2)odd++;
   if(sum%2){
    cout<<"NO\n";
   }
   else{
    vector<int>a(3);
    a[0]=x;
    a[1]=b;
    a[2]=c;
    sort(full(a));
    if((a[0]==a[1] && a[2]%2==0) || (a[1]==a[2]&&a[0]%2==0)){
        cout<<"YES\n";
    }
    else if((a[0]+a[1])==a[2]){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
   }
    
    
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }
        
    
    return 0;
}
