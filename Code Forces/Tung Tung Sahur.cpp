// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     string p, s;
//     cin >> p >> s;

//     int i = 0, j = 0;
//     while (i < p.size() && j < s.size()) {
//         if (p[i] != s[j]) {
//             cout << "NO\n";
//             return;
//         }
//         int cnt_p = 1;
//         int cnt_s = 1;

//         while (i + 1 < p.size() && p[i] == p[i + 1]) {
//             cnt_p++;
//             i++;
//         }

//         while (j + 1 < s.size() && s[j] == s[j + 1]) {
//             cnt_s++;
//             j++;
//         }

//         if (cnt_s < cnt_p || cnt_s > cnt_p * 2) {
//             cout << "NO\n";
//             return;
//         }

//         i++;
//         j++;
//     }

//     if (i == p.size() && j == s.size()) {
//         cout << "YES\n";
//     } else {
//         cout << "NO\n";
//     }
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }


















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
    string a,b;
    cin>>a>>b;
    int i=0 ; int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]!=b[j]){
            cout<<"NO\n";
            return;
        }
        int ca=1;
        int cb =1;
        while(i+1<a.size() && a[i]==a[i+1]){
            ca++;
            i++;
        }
        while(j+1<b.size() && b[j]==b[j+1]){
            cb++;
            j++;
        }
        if(ca>cb || ca*2 < cb){
            cout<<"NO\n";
            return;
        }
        i++;j++;
    }
    if(i==a.size() && j == b.size()){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
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