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

    vector<int>a={11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};

    int f=0;
    while(n>0){
        for(int i=a.size()-1;i>=0;i--){
            if(n%a[i]==0){
                Y;
                f=1;
                return;
            }
        }
        n-=11;
    }
    N;
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
