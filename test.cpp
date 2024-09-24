/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long int
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
const ll Mod=1000000007;
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
    double n,k;
    cin>>n;
    vector<int>a(n);
    ll sum=0;
    for(auto &i:a){
        cin>>i;
        sum+=i;
    }
    if(n<3){
        cout<<-1<<endl;
        return;
    }
    // cout<<"XXXXX\n";
    sort(a.begin(),a.end());
    double avg = (double)sum/((double)n*2);
    double unha=0;

    for(auto &i:a){
        if(avg>i)unha++;
        else{
            if(unha>n/2){
                cout<<0<<endl;
                return;
            }
        }
    }
    // cout<<"XXXXX\n";
    double unhappy=(n+2)/2;
    ll b = a[unhappy-1];
    double x = (double)b;
    // cout<<unhappy<<' '<<x;
    x+=0.0000001;
    x*=2;
    x = abs((x*(double)n)-(double)sum);
    // cout<<' '<<x<<' ';
    // double y = x-(int)x;
    // if(y>.49)x++;
    cout<<(ll)ceil(x);


    
    cout<<endl;
}
int main(){
    // ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}