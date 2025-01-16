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
// #define Mod 1000000007
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
 
void I_Am_Here(){
    string s;
    cin>>s;
    int si = s.size();
    vector<int>a(27,0);
    for(int i=0 ; i<si ; i++){
        a[s[i]-'A']++;
    }
    string c,y,z;
    int f=0;
    vector<int>b(27,0);
    for(int i=0 ; i<26 ; i++){
        if(a[i]&1){
            c+=(i+'A');
            f++;
            if(f>=2){
                cout<<"NO SOLUTION";
                return ;
            }
        }
        b[i]=(a[i]/2);
        // cout<<a[i]<<' '<<b[i]<<endl;
    }
    // for(int i=0 ; i<26 ; i++)cout<<b[i]<<' ' ;
    
    for(int i=0 ; i<26 ; i++){
        if(b[i]){
            int t=b[i];
            while(t--){
                cout<<char(i+'A');
            }
        }
    }
    cout<<c;
    for(int i=26 ; i>=0 ; i--){
        if(b[i]){
            int t=b[i];
            while(t--){
                cout<<char(i+'A');
            }
        }
    }
}
 
int main(){
//    ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
    int ts=1;
    // cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        cout<<endl;
    }
}
 
