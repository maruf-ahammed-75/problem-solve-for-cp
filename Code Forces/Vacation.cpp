#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n;
vector<int>a,b,c;


int vacation(int index , int last){
    if(index > n) return 0;

    int ans =0 ;

    if(last!=1){
        ans = max(ans,a[index] + vacation(index+1, 1));
    }
    if(last!=2){
        ans = max(ans,b[index] + vacation(index+1, 2));
    }
    if(last!=3){
        ans = max(ans,c[index] + vacation(index+1, 3));
    }
    return ans;
}

void I_Am_Here() {
    cin>>n;
    a = vector<int>(n+100, 0);
    b = vector<int>(n+100, 0);
    c = vector<int>(n+100, 0);
    for(int i=1 ; i<=n ; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    cout<< vacation(1, 0) << endl;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
