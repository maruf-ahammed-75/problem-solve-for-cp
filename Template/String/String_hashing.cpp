//single string hashing
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



// double string hashing to further reduce collision
struct StringHash {
    // two large primes to reduce collision
    const long long MOD1 = 1000000007;
    const long long MOD2 = 1000000009;
    const long long P1 = 31;
    const long long P2 = 37;

    vector<long long> prefix1, prefix2;
    vector<long long> power1, power2;

    StringHash(const string &s) {
        int n = s.size();
        prefix1.resize(n+1, 0);
        prefix2.resize(n+1, 0);
        power1.resize(n+1, 1);
        power2.resize(n+1, 1);

        for (int i = 1; i <= n; i++) {
            int val = s[i-1]; // works for all ASCII characters
            power1[i] = (power1[i-1] * P1) % MOD1;
            power2[i] = (power2[i-1] * P2) % MOD2;

            prefix1[i] = (prefix1[i-1] * P1 + val) % MOD1;
            prefix2[i] = (prefix2[i-1] * P2 + val) % MOD2;
        }
    }

    // get double hash of substring [l, r] inclusive
    pair<long long,long long> getHash(int l, int r) {
        long long h1 = (prefix1[r+1] - (prefix1[l] * power1[r-l+1]) % MOD1 + MOD1) % MOD1;
        long long h2 = (prefix2[r+1] - (prefix2[l] * power2[r-l+1]) % MOD2 + MOD2) % MOD2;
        return {h1, h2};
    }

    // quick compare of substrings from two StringHash objects
    bool isEqual(int l1, int r1, int l2, int r2, StringHash &other) {
        return getHash(l1, r1) == other.getHash(l2, r2);
    }
};
