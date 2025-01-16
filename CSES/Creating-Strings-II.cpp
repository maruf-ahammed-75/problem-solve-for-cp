#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
// #define rng(i,a,b) for(int i=int(a);i<int(b);i++)
// #define rep(i,b) rng(i,0,b)
// #define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
// #define per(i,b) gnr(i,0,b)
#define pb push_back
#define mp make_pair
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define full(x) x.begin(), x.end()
// #define dec(x) fixed << setprecision(n)
// #define pi 2*acos(0.0)
// #define PI 3.1415926535897932
#define Mod 1000000007
//LL bigMod(LL A,LL P,int M){ LL R=1; for(A%=M; P; P>>=1) { if(P&1) R=(R*A)%M; A=(A*A)%M; } return R; } /** (A^P) % M **/
//LL bigMul(LL A,LL B,LL M) { LL R=0; for(A%=M; B; B>>=1) { if(B&1) R=(R+A)%M; A=(A+A)%M; } return R; } /** (A*B) % M **/
//LL negMod(LL A,LL B) { return ( ( ( A % B ) + B) % B ); } /** (A % B) when A is negative or positive **/
//LL invMod(LL A,LL M) { return bigMod( A , M-2, M ); } /** (A^(-1)) % M */
//uLL _pow(uLL A,int P) { uLL R=1; for(; P; P>>=1) { if(P&1) R=(R*A); A=(A*A); } return R; } /** (A^P) **/
////auto GCD = [](auto x, auto y) { while(x) x^=y^=x^=y%=x; return y; }; /** Greatest Common Divisor( a , b ) **/
////auto inRng = [](auto u, auto v, auto x) -> bool { return u<=x && x<=v; }; /** check ( u <= x <=v ) */
//#define pi acos(-1)
using namespace std;
 
//ll isPrime[100000];
//void sieve(){
//    isPrime[0]=1;isPrime[1]=1;
//    for(int i=2 ; i*i<=100000 ; i++)
//        if(!isPrime[i]) for(int j=i*i ; j<=100000 ; j+=i) isPrime[j]=1;
////    for(int i=2 ; i<100 ; i++)if(!isPrime[i])cout<<i<<' ';
//}
//bool prime(int n){
//    if(n<2) return false;
//    if(n==2) return true;
//    for(int i=2;i*i<=n;i++){
//        if(n%i==0)
//            return false;
//    }
//    return true;
//}
ll fact[1000001];
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
 
void I_Am_Here(){
    string s;
    cin>>s;
    map<char,int>a;
    for(auto c:s)a[c]++;
    ll res=fact[s.size()];
    // cout<<res<<endl;
    for(auto i:a){
        res = (res*mod_inverse(fact[i.ss]))%Mod;
        // cout<<i.ss<<' '<<res<<endl;
    }
    cout<<res;
}
int main(){
//    ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
    int ts=1;
    // cin >> ts;
    fact[0]=1;
    for(int i=1 ; i<1000001 ; i++){
        fact[i]=(i*fact[i-1])%Mod;
    }
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        cout<<endl;
    }
}
