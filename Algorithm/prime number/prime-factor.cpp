#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> primeFactor(int n){
    vector<int>factor;
    while(n%2==0){
        factor.push_back(2);
        n/=2;
    }-

    for(int i=3 ; i*i<=n ; i+=2){
        while(n%i==0){
            factor.push_back(i);
            n/=i;
        }
    }
    // If n is still greater than 2, then n is a prime factor
    if (n > 2) {
        factor.push_back(n);
    }
    return factor;
}
int main(){
    cin>>n;
    vector<int> factor = primeFactor(n);
    for(auto i:factor){
        cout<<i<<' ';
    }
    cout<<endl;
}