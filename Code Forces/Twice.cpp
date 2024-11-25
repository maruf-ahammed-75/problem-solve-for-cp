#include<bits/stdc++.h>
#define ll long long
using namespace std;
void I_Am_Here() { 
    int n;
    cin>>n;
    map<int,int>m;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
        m[i]++;
    }
    ll ans=0;
    for(auto i:m){
        ans+=i.second/2;
    }
    cout<<ans<<endl;
    
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int ts = 1;
    cin >> ts;
    for (int xyz = 1; xyz <= ts; xyz++) {
        I_Am_Here();
    }
    return 0;
}