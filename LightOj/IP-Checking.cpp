
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n, string &s,ll start,ll end){
    ll sum=1,add=0;
    for(ll i = end ; i>=start ; i--){
        if(s[i]=='1'){
            add+=sum;
        }
        sum*=2;
    }
    // cout<<add<<endl;
    return n==add;
}
void IAmHere(){
   ll a,b,c,d;
   char x;
   cin>>a>>x>>b>>x>>c>>x>>d;
   string s;
   cin>>s;
   if(check(a,s,0,7) && check(b,s,9,16) && check(c,s,18,25) && check(d,s,27,34)){
        cout<<"Yes";
   }
   else{
        cout<<"No";
   }
   cout<<endl;

  
}
int main(){
    // freopen("div7.in", "r", stdin);
	// freopen("div7.out", "w", stdout);
    int T=1;
    cin>>T;
    for(int TT=1 ; TT<=T ; TT++){
        cout<<"Case "<<TT<<": ";
        IAmHere();
    }
    
}