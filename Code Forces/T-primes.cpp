#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll isPrime[1000009];
void sieve(){
   isPrime[0]=1;isPrime[1]=1;
   for(int i=2 ; i*i<=1000009 ; i++)
       if(!isPrime[i]) for(int j=i*i ; j<=1000009 ; j+=i) isPrime[j]=1;

}
void I_Am_Here() {
    ll n;
    cin>>n;
    ll sq = sqrt(n);
    if(sq*sq != n){
        cout<<"NO"<<endl;
    }
    else{
        if(!isPrime[sq]){
            cout<<"YES\n";
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main() {
    sieve();
    int t=1;
    cin >> t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
