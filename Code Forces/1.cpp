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
    cin>> n;
    string s;
    cin>> s;
    int a=0,b=0,c=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='A') a++;
        else if(s[i]=='B') b++;
        else c++;
    }
    if(a&&b){
        cout<<1<<endl;
    }
    else{
        if(a==0)cout<<max(2*1LL,b)<<endl;
        else cout<<max(2*1LL,a)<<endl;
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