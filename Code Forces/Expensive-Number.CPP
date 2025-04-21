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
    string s;
    cin >> s;
    int n = s.size();

    string best_num = "";
    int best_sum = 0;
    double min_cost = 1e18;

    string current = "";
    int digit_sum = 0;

    for (int i = 0; i < n; ++i) {
        current += s[i];
        digit_sum += s[i] - '0';

        if (digit_sum == 0) continue;

        int value = stoll(current);  // current number formed
        double cost = (double)value / digit_sum;

        if (cost < min_cost) {
            min_cost = cost;
            best_num = current;
            best_sum = digit_sum;
        } else if (abs(cost - min_cost) < 1e-9) {
            if (current.size() > best_num.size()) {
                best_num = current;
                best_sum = digit_sum;
            }
        }
    }

    int removed = n - best_num.size();
    cout << removed << '\n';
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
