// digonal = d
// weidth = w
// height = h
// only one rectangular d^2 = w^2 + h^2
// full rectangular  (kd)^2 = 4*w^2 + h^    
//                 k^2 d^2 = 4*w^2 + h^2
//                 k^2(w^2 + h^2) = 4*w^2 + h^2
//                 w^2*k^2 + h^2*k^2 = 4*w^2 + h^2
//                 w^2*k^2 - 4*w^2 = h^2 - h^2*k^2
//                 w^2 (k^2-4) = h^2(1-k^2)
//                 w/h = root of((1-k^2)/(k^2-4))

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void IAmHere(){
   double k;
   cin>>k;
   cout<<fixed<<setprecision(4)<<sqrt((1-k*k)/(k*k - 4))<<endl;
  
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