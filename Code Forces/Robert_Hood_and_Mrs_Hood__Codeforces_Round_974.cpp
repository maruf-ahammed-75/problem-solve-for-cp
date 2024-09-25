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
    vector<ll>start(100004,0),end(100004,0);
    for(int i=0 ; i<n ; i++){
        int x,y;
        cin>>x>>y;
        start[x]++;
        end[y+1]++;
    }
    ll temp=0;
    ll bro=-1,mother=INT_MAX;
    ll bros=-1,mothers=-1;
    vector<ll>ans(100005,0);
    for(int i=1 ; i<=100000 ; i++){
        // if(d<=i){
        //     ans[i]+=start[i]+ans[i-1];
        //     //brother
        //     if(ans[i]>bro){
        //         bro=ans[i];
        //         bros=i;
        //     }
        //     ans[i]-=end[i];
        //     continue;
        // }
        // temp+=ans[i-d];
        // ans[i]+=start[i]+ans[i-1]-temp;
        // //brother
        // if(ans[i]>bro){
        //     bro=ans[i];
        //     bros=i;
        // }
        // ans[i]-=end[i];
        
    }
    
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