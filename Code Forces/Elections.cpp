// #include <bits/stdc++.h>
// #define ll long long
// #define int long long
// #define ff first
// #define ss second
// #define full(a) a.begin(), a.end()
// #define Y cout<<"YES\n"
// #define N cout<<"NO\n"
// using namespace std;

// void I_Am_Here(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int x = max(a,b);
//     x = max(x,c);
//     int ans =0;
//     if(x==a)ans++;
//     if(x==b)ans++;
//     if(x==c)ans++;
//     if(ans==1){
//         a = x-a;
//         b = x-b;
//         c = x-c;    
//         if(a==0){
//             cout<<0<<' ';
//         }
//         else{
//             cout<<a+1<<' ';
//         }
//         if(b==0){
//             cout<<0<<' ';
//         }
//         else{
//             cout<<b+1<<' ';
//         }
//         if(c==0){
//             cout<<0<<' ';
//         }
//         else{
//             cout<<c+1<<' ';
//         }
//     }
//     else{
//         a = x-a;
//         b = x-b;
//         c = x-c;
//         cout<<a+1<<' '<< b+1 <<' ' << c+1;
//     }
//     cout<<endl;
// }
// int32_t main() {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
    
//     int t=1;
//     cin>>t;
//     for(int T=1 ; T<=t ; T++){
//         I_Am_Here();
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Calculate the votes needed for each candidate to win
        int A = max(0, max(b, c) - a + 1);
        int B = max(0, max(a, c) - b + 1);
        int C = max(0, max(a, b) - c + 1);

        // Output the results
        cout << A << " " << B << " " << C << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}