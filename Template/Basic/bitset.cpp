// BITSET UTILITIES

// Declaration with size N
bitset<100005> bs;   // all bits 0 initially

// Set all bits to 1
bs.set();

// Set i-th bit
bs.set(i);

// Reset i-th bit (make 0)
bs.reset(i);

// Reset all bits
bs.reset();

// Flip i-th bit
bs.flip(i);

// Flip entire bitset
bs.flip();

// Check if i-th bit is set
bool f = bs.test(i);

// Count number of 1s
int cnt = bs.count();

// Check if all bits are 1
bool ok1 = bs.all();

// Check if any bit is 1
bool ok2 = bs.any();

// Check if none bit is 1
bool ok3 = bs.none();

// Convert bitset to unsigned long long
unsigned long long x = bs.to_ullong();

// Convert bitset to string
string s = bs.to_string();
