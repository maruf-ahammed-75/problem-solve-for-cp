/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
using namespace std;
double distance(double ax,double ay,double bx,double by){
    return sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
}
double calAngle(double a,double b , double c){
    return acos(((a*a)+(b*b) - (c*c))/(2*a*b));
}
void I_Am_Here(int ts){
    double ax,ay,bx,by,ox,oy;
    cin>>ox>>oy>>ax>>ay>>bx>>by;
    double ato = distance(ax,ay,ox,oy);
    double bto = distance(bx,by,ox,oy);
    double atb = distance(bx,by,ax,ay); 
    // cout<<ato<<' '<<bto<<' '<<atb<<endl;
    cout<<"Case "<<ts<<": ";
    cout<<fixed<<setprecision(10)<<ato*calAngle(ato,bto,atb)<<endl;
}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here(xyz);
    }
}