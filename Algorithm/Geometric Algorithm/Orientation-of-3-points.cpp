// a(x,y),b(x,y),c(x,y),d(x,y)
// slop ab = (yb-ya)/(xb-xa);
// slop bc = (yc-yb)/(xc-xb);
#include <bits/stdc++.h>
using namespace std;
int main() {
// Orientation of 3 points(a,b,c)->
// Counterclockwise (ab<0): ab slop uoper c point
// Clockwise (ab>0): ab slop nicha c point 
// Collinear(ab=0): ab slop soja c point

//how to calculate
    ABCslop = slopAB - slopBC
    = (By-Ay)/(Bx-Ax) - (By-Cy)/(Bx-Cx);
    = ((By-Ay))*(Bx-Cx) - (By-Cy)*(Bx-Ax);

}
