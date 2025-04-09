#include<bits/stdc++.h>
#define ff first
#define ss secondn
//#define ll long long int
#define pb push_back
#define mp make_pair
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define full(x) x.begin(), x.end()


#define For(n) for(int i=0 ; i<n ; i++)
typedef long long int ll;
typedef long long int LL;
typedef unsigned long long int uLL;
using namespace std;
void I_Am_Here(){
    ll n,w;
    cin>>n>>w;
    vector<ll>a(n);
    For(n)cin>>a[i];
    ll l=0,r=1e10;

//    cout<<a[0]<<' '<<l<<' '<<r;
    while(l<r-1){
        ll h=0;
        ll mid=(l+r)/2;
        For(n){
            if(mid>a[i]){
                h+=(mid-a[i]);
            }
        }
        if(h>w)r=mid;
        else l = mid;
//        cout<<h<<' '<<l<<' '<<r<<endl;
    }
    cout<<l<<endl;
}
int main() {
    int ts;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++)
                I_Am_Here();
}