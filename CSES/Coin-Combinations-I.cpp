#include<bits/stdc++.h>
#define ff first
#define ss second
//#define ll long long int
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
#define per(i,b) gnr(i,0,b)
//#define pb push_back
//#define mp make_pair
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define full(x) x.begin(), x.end()
//#define dec(x) fixed << setprecision(n)
//#define pi 2*acos(0.0)
//#define PI 3.1415926535897932
typedef long long int ll;
typedef long long int LL;
typedef unsigned long long int uLL;
//LL bigMod(LL A,LL P,int M){ LL R=1; for(A%=M; P; P>>=1) { if(P&1) R=(R*A)%M; A=(A*A)%M; } return R; } /** (A^P) % M **/
//LL bigMul(LL A,LL B,LL M) { LL R=0; for(A%=M; B; B>>=1) { if(B&1) R=(R+A)%M; A=(A+A)%M; } return R; } /** (A*B) % M **/
//LL negMod(LL A,LL B) { return ( ( ( A % B ) + B) % B ); } /** (A % B) when A is negative or positive **/
//LL invMod(LL A,LL M) { return bigMod( A , M-2, M ); } /** (A^(-1)) % M */
//uLL _pow(uLL A,int P) { uLL R=1; for(; P; P>>=1) { if(P&1) R=(R*A); A=(A*A); } return R; } /** (A^P) **/
////auto GCD = [](auto x, auto y) { while(x) x^=y^=x^=y%=x; return y; }; /** Greatest Common Divisor( a , b ) **/
////auto inRng = [](auto u, auto v, auto x) -> bool { return u<=x && x<=v; }; /** check ( u <= x <=v ) */
//#define pi acos(-1)
#define Mod 1000000007
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
 
void I_Am_Here(){
 
}
int main(){
//    ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
    int ts;
    // cin >> ts;
       int n,x;
    cin>>n>>x;
    vector<ll>a(n),dp(x+1,0);
    dp[0]=1;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<=x ; i++){
        for(int c=0 ; c<n ; c++){
            // cout<<"\n"<<dp[i]<<' '<<dp[i-c]<<"\n";
            if(i>=a[c])dp[i]=(dp[i]+dp[i-a[c]])%Mod;
            // if(i==5)cout<<dp[i]<<' '<<dp[i-c]<<"\n\n";
            
        }
        // cout<<i<<endl;
        // cout<<endl;
    }
    cout<<dp[x];
}