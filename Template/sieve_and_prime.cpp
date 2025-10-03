ll isPrime[100000];
void sieve() {
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i = 2; i * i <= 100000; i++){
        if(!isPrime[i]){
            for(int j = i * i; j <= 100000; j += i){
                isPrime[j] = 1;
            }
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