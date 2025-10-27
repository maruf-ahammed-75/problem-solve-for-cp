// Count number of set bits (1s)
int pc = __builtin_popcount(x);        // for int
int pcLL = __builtin_popcountll(x);    // for long long

// Count trailing zeros
int tz = __builtin_ctz(x);
int tzLL = __builtin_ctzll(x);

// Count leading zeros
int lz = __builtin_clz(x);
int lzLL = __builtin_clzll(x);


// Check power of two
bool isP2 = (x > 0) && ((x & (x - 1)) == 0);