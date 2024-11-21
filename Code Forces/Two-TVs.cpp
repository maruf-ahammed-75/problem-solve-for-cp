/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void I_Am_Here(){
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0 ; i<n ; i++){
        int x,y;
        cin>>x>>y;
        m[x]+=1;
        m[y+1]-=1;
        
    }
    ll sum=0;
    for(auto i:m){
        sum+=i.second;
        if(sum>2){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    
}
int main(){
    // ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
    int ts=1;
    // cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}