#include <bits/stdc++.h>
#define ll long long
using namespace std;

void I_Am_Here() {
    ll n,move,left;
    cin>>n>>move>>left;
    vector<ll>a(n);
    for(auto &i:a){
        cin>>i;
    }
    ll ans=-1;
    for(int i=0 ; i<=left ; i++){
        int rightMove = move - (2*i);
        if(rightMove<0)break;
        ll sum=0;
        ll maxpair=0;
        for(int j=0 ; j<=rightMove ; j++){
            sum+=a[j];
            maxpair=max(maxpair,(a[j]+a[j+1]));
        }
        sum+=(maxpair*i);
        ans=max(ans,sum);
    }
    cout<<ans<<endl;

}

int main() {
    int t=1;
    cin >> t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
