
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void I_Am_Here() {
    ll a[10000]={0};
    ll n;
    cin>>n;
    a[0]=1;
    a[1]=2;
    int i=2;
    for( i=1 ; a[i]<=n ; i++){
        a[i+1]=a[i-1]+a[i];
        
    }
    cout<<i-1<<endl;

}

int main() {
    int ts = 1;
    // cin >> ts;
    for (int xyz = 1; xyz <= ts; xyz++) {
        // cout << "Case " << xyz << ": ";
        I_Am_Here();
    }
    return 0;
}