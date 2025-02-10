#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
#define endl '\n'
using namespace std;
void Solve(){
    string s;
    cin>>s;
    int n= s.size();


        ll ans=0;
        for(int i=0 ; i<n ; i++){
            if(s[i]==s[i+1]){
                ans=1;
            }
        }
        if(ans)cout<<1<<endl;
        else cout<<n<<endl;

}

int32_t main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int ts = 1;
    cin >> ts;
    while (ts--){
        Solve();
    }

    return 0;
}
