//tower of hanoi Simulation
#include <bits/stdc++.h>
using namespace std;
/*
1. Definition
name : toh
parameters :
n -> number of disks
t1 -> source tower
t2 -> intermediate tower
t3 -> destination tower
prints all the moves of disks following all the rules

move first n - 1 disks from t1 to t2
move the last disk from t1 to t3
move first n - 1 disks from t2 to t3

*/

void toh (int n, int t1, int t2, int t3) {
    if (n == 0) return;
    toh(n - 1, t1, t3, t2);
    cout << "Move disk " << n << " from " << t1 << " to " << t3 << endl;
    toh(n - 1, t2, t1, t3);
}
int main () {
    toh(3, 1, 2, 3);
return 0;
}