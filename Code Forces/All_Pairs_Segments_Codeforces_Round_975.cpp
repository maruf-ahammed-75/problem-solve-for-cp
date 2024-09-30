/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void I_Am_Here(){
    int n;
    cin>>n;
    vector<ll>a(n+1);
    vector<ll>b(n);
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
        b[i-1] = (i-1)*(n-i +1 )+ (n-i); 
    }
    for(auto I:b)cout<<I <<' ';
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