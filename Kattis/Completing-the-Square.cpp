/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
using namespace std;
ll dis(int i,int j,int x,int y){
    ll cal = ((i-x)*(i-x))   + ((j-y)*(j-y));
    return cal;
}
pair<ll,ll> center(int a,int b,int c,int d){
    return make_pair((a+c),(b+d));
}
void I_Am_Here(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll dis1 = dis(a,b,c,d);
    ll dis2 = dis(a,b,e,f);
    ll dis3 = dis(c,d,e,f);

    //find which two value is distance is long
    if(dis1+dis2 == dis3){
        auto cen = center(c,d,e,f);
        cout<<cen.first-a<<' '<<cen.second-b<<endl;
    }
    else if(dis1 + dis3 == dis2){
        auto cen = center(a,b,e,f);
        cout<<cen.first-c<<' '<<cen.second-d<<endl;
    }
    else if(dis2+dis3 == dis1){
        auto cen = center(a,b,c,d);
        cout<<cen.first-e<<' '<<cen.second-f<<endl;
    }
}
 

int main(){
    int ts=1;
    // cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}
