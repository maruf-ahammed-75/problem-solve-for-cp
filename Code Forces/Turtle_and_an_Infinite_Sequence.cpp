#include<bits/stdc++.h>
#define ll long long
using namespace std;
void IAmHere(){
    ll n,m;
    cin>>n>>m;
    if(n==0 && m==0){
        cout<<0<<endl;
        return;
    }
    ll l = ((n-m));
    ll r = (n+m);
    if(l<0)l=0;
    ll sum=1;
    string s = "";
    for(int i=1 ; i<=32 ; i++){
        ll left = l/sum;
        ll right= r/sum; 
        if( (l+sum)<=r){
            s+='1';
        }
        else{
            if((left%2!=0 || right%2!=0)){
                s+='1';
            }
            else s+='0';
        }
        sum*=2;
    }
    ll add=0;
    sum=1;
    for(int i=0 ; i<32 ; i++){
        if(s[i]=='1'){
            add+=sum;
        }
        sum*=2;
    }
    // cout<<s<<' '<<add<<endl;
    cout<<add<<endl;
}
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    // freopen("bcount.in","r",stdin);
    // freopen("bcount.out","w",stdout);
    int T=1;
    cin>>T;
    for(int TT=1 ; TT<=T ; TT++){
        IAmHere();
    }
    
}