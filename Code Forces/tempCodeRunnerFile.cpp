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
    int n;
    cin>>n;
    int k;
    cin>>k;
    if((n+1)/2!=k){
        cout<<-1<<endl;
        return;
    }
    int x = 1;
    for(int i=1 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            x = i;
        }
    }
    cout<<n/x;
    cout<<endl;
    for(int i=1 ; i<=n ; i+=x){
        cout<<i<<' ';
    }
    cout<<endl;
}
int main(){

    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}