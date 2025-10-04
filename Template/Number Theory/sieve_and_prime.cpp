const int M = 100000;
bool isPrime[M];
vector<int> primes;
void sieve() {
    if (M < 2) return;
    isPrime[0] = 1;
    isPrime[1] = 1;
    for (int i = 2; 1LL * i * i <= M; ++i) {
        if (!isPrime[i]) {
            for (int j = i * i * 1LL; j <= M; j += i)
                isPrime[j] = 1;
        }
    }
    for (int i = 2; i <= M; ++i)
        if (!isPrime[i])
            primes.push_back(i);
}




// Linear Sieve for prime factorization
//time complexity: O(n)
//space complexity: O(n)
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

bool prime(int n) {
   if(n < 2) return false;
   if(n == 2) return true;
   for(int i = 2; i * i <= n; i++) {
       if(n % i == 0)
           return false;
   }
   return true;
}
