long long nPr(int n, int r) {
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
    }
    return res;
}
