#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>a(1000009);
void cal(){
    for(int i = 1 ; i<1000001 ; i++){
        a[i]+=((i*i)+a[i-1]);
    }
}
void I_Am_Here() {
    ll n;
    cin>>n;
    cout<<a[n]<<endl;
}

int main() {
    cal();
    int t=1;
    cin >> t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
