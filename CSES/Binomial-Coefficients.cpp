#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll p = 1e9+7;
ll bigMod(ll a,ll x){///a^x % p
    if(x==0)return 1;
    if(x&1){
        return a*bigMod(a,x-1)%p;
    }
    else{
        ll res = bigMod(a,x/2);
        return (res*res)%p;
    }
}
ll mod_inverse(ll a){
    return bigMod(a,p-2);
}
ll fact[1000001];
void Factorial(){
    fact[0]=1;
    for(int i=1 ; i<=1000000 ; i++){
        fact[i]=(i*fact[i-1])%p;
    }
}
ll nCr(ll n,ll r){
    
    ll x = fact[n];
    ll y = (fact[r]*fact[n-r])%p;
    // cout<<x<<' '<<y<<endl;
    return x*mod_inverse(y)%p;
}
void I_Am_Here(){
    ll a,b;
    cin>>a>>b;
    cout<<nCr(a,b);
}
int main(){
 
    Factorial();
    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        cout<<endl;
    }
}
