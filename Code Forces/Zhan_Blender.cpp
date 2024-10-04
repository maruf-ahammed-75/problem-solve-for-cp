/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    ll n,x,y;
    cin>>n>>x>>y;
    cout<<n/min(x,y)+(n%min(x,y)!=0)<<endl;

    
}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}