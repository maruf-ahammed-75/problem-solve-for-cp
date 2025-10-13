#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

struct StringHash {
    const long long MOD = 1000000007; // large prime
    const long long P = 31;           // base (for lowercase letters)
    vector<long long> prefix, power;

    StringHash(const string &s) {
        int n = s.size();
        prefix = vector<long long>(n+1, 0);
        power = vector<long long>(n+1, 1);
        
        for (int i = 1; i <= n; i++) {
            power[i] = (power[i-1] * P) % MOD;
            prefix[i] = (prefix[i-1] * P + (s[i-1] - 'a' + 1)) % MOD;
        }
    }

    // get hash of substring [l, r] (0-indexed inclusive)
    long long getHash(int l, int r) {
        long long res = (prefix[r+1] - (prefix[l] * power[r-l+1]) % MOD + MOD) % MOD;
        return res;
    }
};
void I_Am_Here() {
    string a,b;
    cin>>a>>b;
    StringHash hashA(a), hashB(b);
    int n=a.size(), m=b.size();
    int hashvalueB = hashB.getHash(0,m-1);
    for(int i=0 ; i<n-m+1 ; i++){
    StringHash hashA(a), hashB(b);
        int hasA = hashA.getHash(i,i+m-1);
        if(hashvalueB==hasA){
            cout<<i<<" ";
            return ;

        }
    } 
    cout<<-1<<endl;
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
        I_Am_Here();
    }
    return 0;
}