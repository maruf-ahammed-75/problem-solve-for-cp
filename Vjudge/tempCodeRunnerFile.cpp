/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    string s;
    cin>>s;
    for(int i=0 ; i<3 ; i++){
        if(s[i]=='7'){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
}
int main(){
    int ts=1;
    // cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}