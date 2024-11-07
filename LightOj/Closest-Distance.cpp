/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
using namespace std;
double distance(double t,double ax,double ay,double bx,double by,double cx,double cy,double dx,double dy){
    double Ax = (ax+(t*(bx-ax)));
    double Ay = (ay+(t*(by-ay)));

    double Cx = (cx+(t*(dx-cx)));
    double Cy = (cy+(t*(dy-cy)));

    double dis = sqrt(pow((Ax-Cx),2) + pow((Ay-Cy),2)) ;

    // cout<<Ax<<"  "<<Ay<<"  "<<Cx<<"  "<<Cy<<"  distance = "<<dis<<endl;
    return dis;
}
void I_Am_Here(int ts){
    double ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
    double l =0.0,r=1.0,size = 1e-9;
    double ans = INT_MAX;
    while(r-l>size){

        double t1 = (l+(r-l)/3.0);
        double t2 = (r-(r-l)/3.0);

        double dis1 = distance(t1,ax,ay,bx,by,cx,cy,dx,dy);
        double dis2 = distance(t2,ax,ay,bx,by,cx,cy,dx,dy);
        ans=min(dis1,min(ans,dis2));

        if(dis1<dis2){
            r = t2;
        }
        else{
            l = t1;
        }
    }

    double integerPart, decimalPart;

    // Separate the integer part from the decimal part
    decimalPart = modf(ans, &integerPart);


    ostringstream out;
    out << fixed << setprecision(6) << decimalPart;
    double truncatedDecimal = stod(out.str());


    // cout<<truncatedDecimal<<endl;
    cout<<"Case "<<ts<<": ";
    if(truncatedDecimal == 0.0){
        cout<< int(ans/1)<<endl;
        return;
    }
    
    cout<<fixed<<setprecision(10)<<ans<<endl;

}
 

int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        
        I_Am_Here(xyz);
        
    }
}
