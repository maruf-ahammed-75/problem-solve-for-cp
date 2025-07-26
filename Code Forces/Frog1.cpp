#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<int>a;
int n;
// only recursion
// int frog(int index) {

//     if(index >= n ) return 0;

//     int min1 = frog(index + 1) + abs(a[index] - a[index + 1]);
//     int min2 = frog(index + 2) + abs(a[index] - a[index + 2]);
    
//     return min(min1, min2);
// }

vector<int>frog;



void I_Am_Here() {
    cin>> n;
    a = vector<int>(n+100, 0);
    frog = vector<int>(n+100, 0);
    for(int i=1 ; i<=n ; i++) {
        cin >> a[i];
    }

    //convert recursion to  memoization
    for(int index = n ; index >= 1 ; index-- ) {
        int min1 = INT_MAX, min2 = INT_MAX;
        if(index == n) {
            frog[index] = 0;
            continue;
        }
        if(index+1<=n) {
            min1 = frog[index + 1] + abs(a[index] - a[index + 1]);
        }
        if(index+2<=n) {
            min2 = frog[index + 2] + abs(a[index] - a[index + 2]);
        }
        frog[index] = min(min1, min2);
    }
    cout<<frog[1]<<endl;
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
