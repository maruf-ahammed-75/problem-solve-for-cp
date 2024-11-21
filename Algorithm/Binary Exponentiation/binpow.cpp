// Binary Exponentiation
//time complexity lon(n)

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 1e10+7;
//calculate a to the power b
// ll Binary_Exponentiation(ll a, ll b) {
//     if(b==0) return 1;
//     if(b%2==1) {
//         return Binary_Exponentiation(a,b-1)*a%MOD;
//     } else {
//         ll b2 = Binary_Exponentiation(a,b/2)%MOD;
//         return b2*b2%MOD;
//     }
// }->this code is fine
// but recursive is solwer than iterative
ll Binary_Exponentiation(ll a, ll b) {//use this in programming
    ll result = 1;
    while (b > 0) {
        if (b & 1) { // If b is odd
            result = (result * a) % MOD; 
        }
        a = (a * a) % MOD; // Square a with mod
        b /= 2; // Divide b by 2
    }
    return result%MOD;
}



int main() {
    cout<<Binary_Exponentiation(100,2)<<endl;
}
