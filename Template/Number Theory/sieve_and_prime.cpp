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

bool prime(int n) {
   if(n < 2) return false;
   if(n == 2) return true;
   for(int i = 2; i * i <= n; i++) {
       if(n % i == 0)
           return false;
   }
   return true;
}
