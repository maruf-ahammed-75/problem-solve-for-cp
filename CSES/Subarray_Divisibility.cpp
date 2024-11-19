/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void I_Am_Here(){
    ll n;
    cin>>n;
    map<ll,ll>m;
    ll ans=0,sum=0;
    m[0]=1;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        sum+=a[i];
        if(m[sum%n])ans+=m[sum%n];
        m[sum%n]++;
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