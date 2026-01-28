#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;


void I_Am_Here() {
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;

    if(a==b){
        Y;
        return;
    }
    int one=0;
    int zero=0;
    int i=0;
    vector<int>v;
    while(i<n){
        if(a[i]=='1')one++;
        else zero++;
        if(one==zero){
            v.push_back(i);
        }
        i++;
    }
    // for(auto i:v){
    //     cout<<i<<' ';
    // }
    // cout<<endl;

    if(v.size()==0){
        N;
        return;
    }

    // cout<<v[v.size()-1]<<endl;
    for(int i=v[v.size()-1]+1 ; i<n ; i++){
        if(a[i]!=b[i]){
            N;
            return;
        }
    }
    // cout<<"fine "<<endl;

    int j=0;
    for(int i=0 ; i<v.size() ; i++){
        bool f1=0,f2=0;
        // cout<<v[i]<<endl;
        for( ;j<=v[i] ; j++){
            if(a[j]==b[j]){
                f1=1;
            }
            else{
                f2=1;
            }
        }
        if(f1 && f2){
            N;
            return;
        }
    }
    Y;

}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
