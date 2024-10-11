/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void I_Am_Here(){
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0 ; i<s.size() ; i++){
        if((s[i]>='0'&&s[i]<='6') || s[i]=='O'){
            sum++;
        }
    }
    ll over = sum/6;
    ll ball = sum%6;
    if(over){
        cout<<over<<" OVER";
        if(over>1){
            cout<<"S";
        }
        cout<<" ";
    }
    if(ball){
        cout<<ball<<" BALL";
        if(ball>1){
            cout<<"S";
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