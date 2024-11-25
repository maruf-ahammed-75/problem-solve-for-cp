#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<string>a(1000000);

//calculate value respect to each string and
// also calculate deduct dublicate char
ll process(string s,int i){
    bitset<26>mask=0;
    for(char c:s){
        mask[c-'a'] = !mask[c-'a'];
    }
    string c = ""; 
    for(int j=0 ; j<26 ; j++){
        if(mask[j]){
            char c1 = 'a'+j;
            c+=c1;
            
        }
    }
    a[i]=c;
    return  mask.to_ulong();
}
void I_Am_Here() {
    ll n;
    cin>>n;
    
    map<ll,ll>m;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        ll x = process(a[i],i);
        m[x]++;
    }
    // for(auto i:m){
    //     cout<<i.first<<' '<<i.second<<endl;
    // }
    // cout<<endl;
    ll ans=0;
    for(int i=0 ; i<n ; i++){
        // cout<<"main = "<<a[i]<<endl;
        for(char j = 'a' ; j<='z' ; j++){
            bitset<26>mask=0;
            string s = a[i]+j;
            // cout<<j<<" = "<<s<<endl;
            for(char c:s){
                mask[c-'a'] = 1;
            }
            ll x = mask.to_ulong();
            // cout<<x<<' '<<m[x]<<endl;
            ans+= (m[x]*(m[x]-1))/2;
            m[x]=0;
        }
    }
    cout<<ans<<endl;
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    

    int t=1;
    // cin >> t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
