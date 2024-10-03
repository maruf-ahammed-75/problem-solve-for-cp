/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ff first 
#define ss second 
#define ll long long
using namespace std;

void I_Am_Here(){
    int n;
    cin>>n;
    vector<int>a(n+1,0);
    map<int,pair<int,int > > m;
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
        a[i]+=a[i-1];
        a[i]%=7;
        // cout<<a[i]<<' ';
        if(m.find(a[i])==m.end()){
            m[a[i]]={i,i};
            // cout<< m[a[i]].ff << " " << m[a[i]].ss <<endl;
        }
        else{
            m[a[i]]={(min(m[a[i]].first,i)),(max(m[a[i]].second,i))};
            // cout<<2<<"    "<<m[a[i]].ff<<' '<<m[a[i]].ss<<endl;
        }
    }
    // for(auto i:a){
    //     cout<<i<<' ';
    // }
    // cout<<endl;
    // for(const auto &i:m){
    //     cout<<i.ss.ff<<' '<<i.ss.ss<<endl;
    // }

    int ans=INT_MIN;
    for(auto i:m){
        ans=max(ans,i.ss.ss-i.ss.ff);
    }
    cout<<ans<<endl;

    
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    int ts=1;
    // cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}