// : What is the time complexity of the following code?
int fun(int n) {
   if(n <= 1) return n;
   int x = fun(n - 1);
   int y = fun(n - 2);
   return x + y;
}

// time complexity = 2^n