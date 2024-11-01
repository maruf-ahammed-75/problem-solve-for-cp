/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
//#define pb push_back
//#define mp make_pair
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define full(x) x.begin(), x.end()

using namespace std;


void I_Am_Here(){
    ll n,k;
    cin>>n>>k;
    if(n==1 && k==1){
        cout<<1<<endl<<1<<endl;
    }
    else if(k==1|| n==k){
        cout<<-1<<endl;
    }
    else{

        if((k-1)%2==0) {
            cout<<3<<endl;
            cout<<1<<' '<<k-1<<' '<<k+2<<endl;
        }
        else{
            cout<<3<<endl;
            cout<<1<<' '<<k<<' '<<k+1<<endl;
        }
        
    }
}
int main(){

    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}