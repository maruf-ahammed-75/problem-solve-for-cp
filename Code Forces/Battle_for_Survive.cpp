/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        // cout<<a[i]<<' ';
    }
    // cout<<endl;
    ll ans=0;
    for(int i=n-3 ; i>=0 ; i--){
        a[i]=a[i+1]-a[i];
        // cout<<i<<' '<<a[i]<<endl;
    }
    cout<<a[n-1]-a[0]<<endl;

}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}