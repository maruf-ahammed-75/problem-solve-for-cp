#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 1e9+7;
calculate a to the power b
ll Binary_Exponentiation(ll a, ll b) {
    if(b==0) return 1;
    if(b%2==1) {
        return Binary_Exponentiation(a,b-1)*a%MOD;
    } else {
        ll b2 = Binary_Exponentiation(a,b/2)%MOD;
        return b2*b2%MOD;
    }
}//->this code is fine
// but recursive is solwer than iterative
// ll Binary_Exponentiation(ll a, ll b) {// so use this in code
//     ll result = 1;
//     while (b > 0) {
//         if (b & 1) { // If b is odd
//             result = (result * a) % MOD; 
//         }
//         a = (a * a) % MOD; // Square a with mod
//         b /= 2; // Divide b by 2
//     }
//     return result;
// }
void I_Am_Here() {
    ll box,num;
    cin>>num>>box;
    //the number of way to stand box
    //or the number of subset of box

    // ll subset =(pow(2,box)-1);//-1 is empty subset
    ll subset=Binary_Exponentiation(2,box);
    subset-=1;
    subset%=MOD;

    // the total number of ways distribute n presents->
    // (subset*subset*subset*subset*...n time)
    // ll ans = pow(subset,num);
    cout<<Binary_Exponentiation(subset,num) % MOD<<endl;
}

int main() {
    int t=1;

    while (t--) {
        I_Am_Here();
    }
    return 0;
}
