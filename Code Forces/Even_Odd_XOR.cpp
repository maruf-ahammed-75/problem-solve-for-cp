#include<bits/stdc++.h>
#define ll long long
using namespace std;
void IAmHere(){
    ll n;
    cin>>n;
    ll odd=0,even =0;
    ll x = n/2;
    if(x%2==0){
        ll temp=n;
        if(n&1)temp=n-1;
        for(int i=2 ; i<=temp+1 ; i++){
        //(n+1)// %2 ==0 only for this condition
            cout<<i<<' ';
        }
        if(n&1)cout<<0<<' ';
    }
    else{
        if(n==3){
            cout<<"2 1 3";
        }
        else if(n>=6){
            cout<<"4 1 2 12 3 8 ";
            ll temp=n-6;
            // cout<<temp<<' ';
            if(n&1)temp-=1;
            // cout<<temp<<' ';
            // cout<<endl;
            for(int i=14 ; i<=14+temp-1 ; i++){
            //(n+1)// %2 ==0 only for this condition
                cout<<i<<' ';
            }
            if(n&1)cout<<0<<' ';
        }
    }
    //*por por same bit ar 2 number ar xor same 
    //*but first number even howa lagve 

    // for(int i=2 ; i<=13 ; i++){
    //     //(n+1)// %2 ==0 only for this condition
    //     if(i&1){
    //         odd^=i;
    //     }
    //     else{
    //         even^=i;
    //     }
    // }
    // cout<<odd<<' ' <<even;
    cout<<endl;
    
}
int main(){
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);
    int T=1;
    cin>>T;
    for(int TT=1 ; TT<=T ; TT++){
        IAmHere();
    }
    
}