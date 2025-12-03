#include <bits/stdc++.h>
using namespace std;

int p;                 // prime modulus
vector<int> fact;      // factorials modulo p

// Fast exponentiation: a^b % mod
int modPow(int a, int b, int mod) {
    int result = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) result = (int)((1LL * result * a) % mod);
        a = (int)((1LL * a * a) % mod);
        b >>= 1;
    }
    return result;
}

// Precompute factorials modulo p
void precomputeFactorials(int prime) {
    p = prime;
    fact = vector<int>(p+1,1);
    for (int i = 1; i < p; ++i)
        fact[i] = ((1LL * fact[i - 1] * i) % p);
}

// Compute nCr % p using modular inverse on the fly
int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    int numerator = fact[n];
    int denominator = ((1LL * fact[r] * fact[n - r]) % p);
    return ((1LL * numerator * modPow(denominator, p - 2, p)) % p);
}

// Lucas Theorem
int nCrModpLucas(int n, int r) {
    int res = 1;
    while (n > 0 || r > 0) {
        int ni = n % p;
        int ri = r % p;
        if (ri > ni) return 0; // if any digit ri > ni, result is 0
        res = (int)((1LL * res * nCr(ni, ri)) % p);
        n /= p;
        r /= p;
    }
    return res;
}
int main() {
    int n = 100, r = 25, prime = 5;
    precomputeFactorials(prime);
    cout << "Value of nCr % p is " << nCrModpLucas(n, r) << endl;
    return 0;
}
