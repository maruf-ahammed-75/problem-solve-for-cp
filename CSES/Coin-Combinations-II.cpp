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
using namespace std;
 
ll dp[1000001];
 
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0 ; i<n ;i++){
        cin>>a[i];
    }
    dp[0]=1;
    for(auto c:a){
        for(int i=0 ; i<=x ; i++){
            if(i>=c){
                dp[i]+=dp[i-c];
                dp[i]%=1000000007;
            }
            // cout<<dp[i]<<' ';
        }
        // cout<<endl;
    }
    cout<<dp[x]<<endl;
} 
