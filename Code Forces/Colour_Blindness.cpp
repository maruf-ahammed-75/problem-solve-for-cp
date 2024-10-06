// colourblindness



/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1e4 + 7;
ll n;
string a,b;
bool sameColour(){
    for(int i=0 ; i<n ; i++){
        if(a[i]!=b[i] && (a[i]=='R' || b[i]=='R')){
            return false;
        }
    }
    return true;
}
void I_Am_Here(){
    cin>>n;
    cin>>a>>b;
    cout<< (sameColour() ? "YES" : "NO")<<endl;

}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}