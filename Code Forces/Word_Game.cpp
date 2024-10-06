// Word Game



/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    int n;
    cin>>n;
    map<string ,int>m;
    string s[3][n];
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>s[i][j];
            m[s[i][j]]++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        ll total =0;
        for(int j=0 ; j<n ; j++){
            if(m[s[i][j]]==1)total+=3;
            else if(m[s[i][j]]==2)total+=1;
            // cout<<i<<' '<<j<<' '<<s[i][j]<<' '<<total<<endl;
        }
        cout<<total<<' '; 
    }
    cout<<endl;
}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}