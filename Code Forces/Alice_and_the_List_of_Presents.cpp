#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 1e10+7;
void I_Am_Here() {
    ll box,num;
    cin>>num>>box;
    //the number of way to stand box
    //or the number of subset of box

    // ll subset =(pow(2,box)-1);//-1 is empty subset
    ll subset=1;
    for(int i=1 ; i<=box ; i++){
        subset = (subset*2)%MOD;
    }
    subset--;

    // the total number of ways distribute n presents->
    // (subset*subset*subset*subset*...n time)
    // ll ans = pow(subset,num);
    ll ans=1;
    for(int i=1 ; i<=num ; i++){
        ans = (ans*subset)%MOD;
    }
    cout<<(ans)<<endl;


}

int main() {
    int t=1;

    while (t--) {
        I_Am_Here();
    }
    return 0;
}
