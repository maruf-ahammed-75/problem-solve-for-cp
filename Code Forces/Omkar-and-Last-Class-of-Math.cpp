#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

void I_Am_Here() {
    int n;
    cin>>n;

    pair<int,int>a;
    int ans = INT_MAX;

    vector<int>temp;
    temp.push_back(1);
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            temp.push_back(i);
            temp.push_back(n/i);
        }
    }

    for(auto i:temp){
        int x = i;
        int y = abs(n-i);
        if(lcm(x,y)<ans){
            ans = lcm(x,y);
            a = {x,y};
        }
    }
    
    cout << a.ff << " " << a.ss << "\n";
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
