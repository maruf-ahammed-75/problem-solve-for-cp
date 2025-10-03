long long numDivisors[1000005] = {};
void calculateDivisors(long long numDivisors[])
{   //calculate number of divisor
    for (int i = 1; i < 1000005; i++) {
        for (int j = i; j < 1000005; j += i) {
            numDivisors[j]++;
        }
    }
}