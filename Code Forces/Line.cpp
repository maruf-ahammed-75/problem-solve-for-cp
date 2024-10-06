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
    string s;
    cin>>s;
    ll sum=0;
    ll ans =0 ;
    vector<ll>a(n,0);
    for(int i=0 ; i<n ; i++){
        if(s[i]=='L'){
            // cout<<"l = "<<(n-(n-i))<<endl;
            sum+=(n-(n-i));
        }
        else{
            sum+=n-i-1;
            // cout<<"R = "<<n-i-1<<endl;
        }
    }
    for(int i=0 ; i<n/2 ; i++){
        if(s[i]=='L'){
           ll x  = (n-(n-i));
           ll y = n-i-1;
           a.push_back(abs(x-y));
        //    cout<<i<<' '<<x <<' '<< y <<' '<<endl;
        }
    }
    for(int i=n/2 ; i<n ; i++){
        if(s[i]=='R'){
            ll x  = n-i-1;
            ll y = (n-(n-i));
            a.push_back(abs(y-x));
            // cout<<i<<' '<<x <<' '<< y <<' '<<endl;
        }
    }
    // cout<<sum<<endl;
    // for(auto i :a){
    //     cout<<i<<' ';
    // }
    // cout<<endl;
    sort(a.rbegin(),a.rend());
    
    for(int i=0 ; i<n ; i++){
        sum+=a[i];
        cout<<sum<<' ';
    }
    cout<<endl;
}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}