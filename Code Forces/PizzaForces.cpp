#include <bits/stdc++.h>
#define ll long long
#define int long long
// #define mx 100008
#define mx 18
using namespace std;
void Solve()
{
    int n;
    cin >> n;
    if(n<=6){cout<<15<<endl;return;}
    cout<<(n+1)/2*5<<endl;
}

int32_t main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int ts = 1;
    cin >> ts;
    while (ts--)
    {
        Solve();
    }

    return 0;
}
