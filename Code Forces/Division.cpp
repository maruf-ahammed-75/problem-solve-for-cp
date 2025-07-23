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
    // For Division 1: 1900≤rating
    // For Division 2: 1600≤rating≤1899
    // For Division 3: 1400≤rating≤1599
    // For Division 4: rating≤1399
    
    
    int n;
    cin>>n;
    if(n<=1399)cout<<"Division 4";
    else if(n>=1400 && n<=1599)cout<<"Division 3";
    else if(n>=1600 && n<=1899)cout<<"Division 2";
    else cout<<"Division 1";

    cout<<endl;


}

int32_t main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

  

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}