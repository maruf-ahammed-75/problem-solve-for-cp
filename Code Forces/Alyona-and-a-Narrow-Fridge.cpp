#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;
int n,k;
vector<int> a;

bool isTake(int mid) {
    vector<int> b;
    for(int i=0 ; i<mid ; i++) b.push_back(a[i]);
    sort(full(b),greater<int>());

    int total = 0;

    for(int i = 0; i < mid; i += 2) {
        total += b[i]; 
    }

    return total <= k;
}
void I_Am_Here() {
    cin>>n>>k;
    a = vector<int>(n);
    for(int i =0 ; i<n ; i++) cin>>a[i];

    int l = 0;
    int h = 100000;

    while(h-l>1){
        int mid = (l+h)/2;//add +1 cause need upper mid

        if(mid<=n && isTake(mid)){
            // cout<<"if = "<<mid;
            l = mid;
        }

        else{
            // cout<<"else = "<<mid;
            h = mid;
        }
        // cout<<' '<<l<<' '<<h<<endl;
    }
    cout<<l<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        // cout<<"Case "<<T<<": ";
        I_Am_Here();
    }
    return 0;
}