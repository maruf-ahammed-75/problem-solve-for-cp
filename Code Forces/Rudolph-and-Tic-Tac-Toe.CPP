#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
bool check(vector<string> &a, char c) {
    // row column
    for (int i = 0; i < 3; i++) {
        if (a[i][0] == c && a[i][1] == c && a[i][2] == c) return true; // Row check
        if (a[0][i] == c && a[1][i] == c && a[2][i] == c) return true; // Column check
    }
    //diagonals
    if (a[0][0] == c && a[1][1] == c && a[2][2] == c) return true;
    if (a[0][2] == c && a[1][1] == c && a[2][0] == c) return true;
    
    return false;
}

void I_Am_Here() {
    vector<string> a(3);
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    if (check(a, 'X')) {
        cout << "X\n";
    } else if (check(a, 'O')) {
        cout << "O\n";
    } else if (check(a, '+')) {
        cout << "+\n";
    } else {
        cout << "DRAW\n";
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
