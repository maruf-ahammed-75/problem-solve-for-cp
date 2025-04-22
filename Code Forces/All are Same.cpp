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
    if(s.size() == 1){
        cout<<-1<<endl;
        return;
    }
    int x = *s.begin();
    int temp = *s.begin();
    auto se = s.begin();
    se++;
    x =*se - x;
    // cout<<x<<endl;
    for(int i=1 ; i*i<= x ; i++){
        if(x%i==0){
            a.push_back(i);
            if(i!= x/i){
                a.push_back(x/i);
            }
        }
    }
    sort(full(a));
    for(int i=a.size()-1 ; i>=0 ; i--){
        // cout<<" a[i]= "<<a[i]<<endl;
        bool f = true;
        for(auto it : s){
            if((it-temp) % a[i] != 0){
                f = false;
                break;
            }
        }
        if(f){
            cout<<a[i]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    
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