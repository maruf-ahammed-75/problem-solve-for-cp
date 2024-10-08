/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
        a
    d       e
b               c

/*
ADE/DEBC = K;//K DAWA ACHE
AB/AD = X
area of(ABC / ADE) = X^2 {kono polygon ar sob bahu K kore barayle ar area K^2 barbe}
area of(ADE+DECB)/ADE = X^2{Area of ABC = ADE + DECB}
 => 1+(DECB/ADE)=X^2
 =>DECB/ADE=X^2-1;
 =>ADE/DEBC = 1/(X^2-1)
 => K = 1/(X^2-1)
 => X = SQRT(K+1/K)

We know 
AB/AD = X;
AB/AD=SQRT(K+1/K)
AD = AB/SQRT(K+1/K)
OR AD = AB * SQRT(K/K+1)
*/



#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<setprecision(10)<<a*sqrt(d/(d+1))<<endl;
}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        cout<<"Case "<<xyz<<": ";
        I_Am_Here();
    }
}