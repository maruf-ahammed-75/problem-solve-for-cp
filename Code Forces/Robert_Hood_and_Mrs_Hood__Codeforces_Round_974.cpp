/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void I_Am_Here(){
    int n,d,k;
    cin>>n>>d>>k;
    vector<ll>start(n+1,0),end(n+1,0);
    for(int i=0 ; i<k ; i++){
        int x,y;
        cin>>x>>y;
        start[x]++;
        end[y]++;
    }
    for(int i=0 ; i<n ; i++){
        start[i+1]+=start[i];
        end[i+1]+=end[i];
    }
    ll bro=-1,mom=INT_MAX,broi=0,momi=0;
    for(int i=d ; i<n ;i++){
        ll cur = start[i]-end[i-d];
        if(cur>bro){
            bro = cur;
            broi=i;
        }
        if(cur<mom){
            mom = cur;
            momi=i;
        }
    }
    cout<<broi-d+1<<' '<<momi-d+1<<endl;
    
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