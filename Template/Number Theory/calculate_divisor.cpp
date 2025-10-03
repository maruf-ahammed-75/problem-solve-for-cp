long long numDivisors[1000005] = {};
void calculateDivisors(long long numDivisors[])
{
    for (int i = 1; i < 1000005; i++) {
        for (int j = i; j < 1000005; j += i) {
            numDivisors[j]++;
        }
    }
}