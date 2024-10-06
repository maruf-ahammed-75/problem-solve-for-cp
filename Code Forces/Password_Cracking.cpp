/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    ll n;
    cin>>n;
    string s = "";
    while(s.size()<n){
        int c;
        cout<<"? "<<s+"0"<<endl;
        cin>>c;
        if(c){
            s+="0";
            continue;
        }
        cout<<"? "<<s+"1"<<endl;
        cin>>c;
        if(c){
            s+="1";
            continue;
        }
        break;
    }
    while(s.size()<n){
        int c;
        cout<<"? "<<"0"+s<<endl;
        cin>>c;
        if(c){
            s = "0"+s;
            continue;
        }
        s = "1"+s;
    }
    cout<<"! "<<s<<endl;



}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}