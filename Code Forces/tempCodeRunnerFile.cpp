#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here(){
    int n;
    cin>>n;
    vector<int> a;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int x = *s.begin();
    for(auto i:s){
        a.push_back(i-x);
    }
    bool b = 1;
    for(int i=2;i<a.size();i++){
        if(a[i]%a[1]!=0){
            b = 0;
            break;
        }
    }
    if(b){
        cout<<a[1]<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}