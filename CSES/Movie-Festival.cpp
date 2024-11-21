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
    vector<pair<ll, ll>> a(n);
    for(ll i=0 ; i<n ; i++){
        cin>>a[i].second>>a[i].first;
    }
    sort(a.begin(),a.end());
    // cout<<endl;
    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i].second<<' '<<a[i].first<<endl;
    // }
    int ans=0;
    int temp = -1;
    for(int i=0 ; i<n ; i++){
        if((a[i].second>=temp)){
            ans++;
            temp = a[i].first;
        }
    }
    cout<<ans<<endl;
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