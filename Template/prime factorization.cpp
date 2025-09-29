#include <bits/stdc++.h>
using namespace std;
vector < int > fp;
void calcFp(int n) {
    fp = vector < int > (n + 1, 1);
    for (int prime = 2; prime <= n; prime++) {
        for (int num = prime; num <= n; num += prime) {
            if (fp[num] == 1) fp[num] = prime;
        }
    }
}
int main () {
    calcFp((int)1e6);
    while (1) {
        int x;
        cin >> x;
        if (x == 0) break;
        vector < int > primes, pw;
        while (x > 1) {
            int p = fp[x];
            int cnt = 0;
            while (x % p == 0) {
                x /= p;
                cnt++;
            }
            primes.push_back(p);
            pw.push_back(cnt);
        }
        for (int i = 0; i < primes.size(); i++) {
            cout << primes[i] << "^" << pw[i] << endl;
        }
    }
return 0;
}