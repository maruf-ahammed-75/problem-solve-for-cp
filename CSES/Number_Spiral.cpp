/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void I_Am_Here(){
    ll r,c;
    cin>>r>>c; 
    if(r>c){
        if(r&1){ 
            cout<<(r-1)*(r-1) + 1 + c -1;
        }
        else{
            cout<<r*r - c  + 1;
        }
    }
    else{
        if(c&1){
            cout<< c*c -r+1;
        }
        else{
            cout<<(c-1)*(c-1)+1+r-1;
        }
    }
    cout<<endl;
}
int main(){
    // ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}