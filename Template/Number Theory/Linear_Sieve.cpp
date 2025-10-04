//time complexity: O(n)
//space complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;  // up to 1e7
vector<int> lp;   // lowest prime factor
vector<int> primes;      // list of primes

void linear_sieve(int n) {
    lp = vector<int>(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (lp[i] == 0) {        // i is prime
            lp[i] = i;
            primes.push_back(i);
        }
        for (int p : primes) {
            if (p > lp[i] || 1LL * i * p > n) break;
            lp[i * p] = p;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    linear_sieve(N);

    cout << "Number of primes up to " << N << " = " << primes.size() << "\n";
    cout << "First 10 primes: ";
    for (int i = 0; i < 10; i++) cout << primes[i] << " ";
    cout << "\n";

    return 0;
}
