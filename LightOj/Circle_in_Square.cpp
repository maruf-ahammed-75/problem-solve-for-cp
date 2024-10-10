/*first other case
Square inside a Circle
Since the square is inscribed, the diagonal of the square is equal to the diameter of the circle, which is  2r
{r = radius of circle}
Area of the Circle = pi*r^2

The relationship between the side length= 𝑠, s of the square and the diagonal 𝑑
d is:
d(one side of square) = root(2)*r;
-------------------------------------------------------------------------------------------------------------------------------------
Circle inside a Square
The side length 𝑠
s of the square is equal to the diameter of the circle
𝑠 = */


// Circle in Square->light oj


#include<bits/stdc++.h>
#define ll long long
using namespace std;
const double pi = 2 * acos (0.0);
double CircleArea(double &r){
    // cout<<pi<<' '<<(pi*r*r)<<endl;
    return (pi*r*r);
}
double SqureArea(double &r){
    return 4*r*r;
}
void IAmHere(){
    double r;
    cin>>r;
    // cout<<setprecision(8)<<SqureArea(r)<<endl;
    // cout<<setprecision(7)<<CircleArea(r)<<endl;
    cout<<fixed<<setprecision(2)<<((double)SqureArea(r)-(double)CircleArea(r))<<endl;
  
}
int main(){
    // freopen("div7.in", "r", stdin);
	// freopen("div7.out", "w", stdout);
    int T=1;
    cin>>T;
    for(int TT=1 ; TT<=T ; TT++){
        cout<<"Case "<<TT<<": ";
        IAmHere();
    }
    
}