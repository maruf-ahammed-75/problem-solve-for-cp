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
    ll z=0,p=0,ne=0;
    vector<ll>a(n);
    for(auto &i:a){
        cin>>i;
        if(i==0){
            z++;
        }
        else if(i<0){
            ne+=i;
        }
        else if(i>0){
            p+=i;
        }
    }
    // cout<<z<<' '<<ne<<' '<<p<<"\n";
    cout<<z+((p+z)==abs(ne))<<endl;
}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}