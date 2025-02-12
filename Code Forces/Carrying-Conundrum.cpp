#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    int n;cin>>n;
    int a=1,b=1;
    bool f=1;
    ll mul =1;
    while(n!=0){
        if(f){
            f=0;
            a+=(n%10 * mul);
            
        }
        else{
            f=1;
            b+=(n%10 * mul);
            mul*=10;
        }
        n/=10;
    }
    cout<<a*b - 2 <<endl; 

}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
