#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

double mx(double a, double b){
    if(a>b)return a;
    else return b;
}

double tax_cal(double n){
    if(n>150000.0)return 52500.0+(((n-150000.0)*45.0)/100.0);

    else if(n>125000.0)return 42500.0 + (((n-125000.0)*40.0)/100.0);
    else if(n>100000.0)return 27500.0+(((n-100000.0)*60.0)/100.0);

    else if(n>50000.0)return 7500.0+(((n-50000.0)*40.0)/100.0);
    else return (((n-12500.0)*20.0)/100.0);
}

double bin_src(double l, double h, double s){
    double m = l+(h-l)/2;
    double tax = tax_cal(m);
    double value = abs(tax-s)/mx(1,s);
    if(value<=0.0000005)return m;
    if(tax<s) return bin_src(m+0.00000001,h,s);
    else return bin_src(l,m-0.00000001,s);
}

int main()
{

    ll t;
    double n;

    cin >> t;

    while (t--)
    {
        
        cin >> n;
        if(n==0)cout<<"12500\n";
        else{
            cout<<fixed<<setprecision(10)<<bin_src(0,DBL_MAX,n)<<"\n";
        }
    }

    return 0;
}