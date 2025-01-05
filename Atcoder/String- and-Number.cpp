#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    string s;
    cin>>s;
    bool f=1;
    ll n = s.size();
    if(s.size()!=8){
        cout<<"No"<<endl;
        return;
    }
    
    if(s[0]>='A' && s[0]<='Z')f=1;
    else f=0;
    
    if(s[n-1]>='A' && s[n-1]<='Z' && f)f=1;
    else f=0;
    
    for(int i=1 ; i<n-2 ; i++){
        if(s[i]!='1' && s[i]!='2' && s[i]!='3' && s[i]!='4' && s[i]!='5' && s[i]!='6' && s[i]!='7' && s[i]!='8' && s[i]!='9' && s[i]!='0' )f=0;
    }
    ll val=0;
    for(int i=1 ; i<n-2 ; i++){
        if(s[i]=='0')val++;
        else break;
    }
    // cout<<val<<endl;
    if((n-val-2)!=6)f=0;
    if(f){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
