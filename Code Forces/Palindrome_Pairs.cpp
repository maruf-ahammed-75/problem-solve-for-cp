#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<string>a(100000+99);
map<ll,ll>m;

//calculate value respect to each string and
ll Bin_Value(string &s){
    bitset<26>mask=0;
    for(char c:s){
        mask[c-'a'] = !mask[c-'a'];
    }
    return  mask.to_ulong();
}

//deduct the even char
void minize_String(string &s,int i){
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
}
void I_Am_Here() {
    ll n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        ll x = Bin_Value(a[i]);
         m[x]++;
        minize_String(a[i],i);
    }
    // cout<<"intput\n";
    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i]<<endl;
    // }
    // cout<<endl;
    // for(auto i:m){
    //     cout<<i.first<<' '<<i.second<<endl;
    // }
    // cout<<endl;

    ll ans=0;
    for(int i=0 ; i<n ; i++){
        ll x = Bin_Value(a[i]);
        if(m[x]>1)ans+=m[x]-1;
        for(char c='a' ; c<='z' ; c++){
            string s = "";
            s=a[i]+c;
            ll y = Bin_Value(s);
            if(m[y]>0)ans+=m[y];
        }
        m[x]--;
    }
    cout<<ans<<endl;
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t=1;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
