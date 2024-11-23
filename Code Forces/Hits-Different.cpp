#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>ans(2000000,0);
ll a[2000][2000];
void I_Am_Here() {
    ll n;
    cin>>n;
    cout<<ans[n]<<endl;
}
void pre_cal(){
    ll k=1;
    for(int i=1 ; i<=2000 ; i++){
        for(int j=i-1 ; j>=1 ; j-- ){
            //    a[j][i-j] = up+side-diagonal;
               a[j][i-j]=a[j-1][i-j]+a[j][i-j-1]-a[j-1][i-j-1] + (k*k);
               ans[k]=a[j][i-j];
               k++;
        }
    }
}

int main() {
    pre_cal();
    int t=1;
    cin >> t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
