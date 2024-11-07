#include <bits/stdc++.h>
using namespace std;

// Function to calculate the square of the distance at a given time t
double calculateDistanceSquared(double t, int Ax, int Ay, int Bx, int By, int Cx, int Cy, int Dx, int Dy) {
    double x1 = Ax + t * (Bx - Ax);
    double y1 = Ay + t * (By - Ay);
    double x2 = Cx + t * (Dx - Cx);
    double y2 = Cy + t * (Dy - Cy);
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

// Function to find the minimum distance between paths using the closed-form approach
double findMinimumDistance(int Ax, int Ay, int Bx, int By, int Cx, int Cy, int Dx, int Dy) {
    // Calculate constants for the quadratic function
    int a = Ax - Cx;
    int b = (Bx - Ax) - (Dx - Cx);
    int c = Ay - Cy;
    int d = (By - Ay) - (Dy - Cy);

    // Coefficients of the quadratic function f(t) = At^2 + Bt + C
    double A = b * b + d * d;
    double B = 2 * (a * b + c * d);
    double C = a * a + c * c;

    // Calculate distances at t = 0 and t = 1
    double distAt0 = calculateDistanceSquared(0, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy);
    double distAt1 = calculateDistanceSquared(1, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy);
    double minDistanceSquared = min(distAt0, distAt1);

    // Calculate the critical point t = -B / (2A) if A is not zero
    if (A != 0) {
        double tCritical = -B / (2 * A);
        if (tCritical >= 0 && tCritical <= 1) {
            double distAtCritical = calculateDistanceSquared(tCritical, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy);
            minDistanceSquared = min(minDistanceSquared, distAtCritical);
        }
    }

    // Return the square root of the minimum distance squared
    return sqrt(minDistanceSquared);
}

int main() {
    int T;
    cin >> T;
    for (int caseNo = 1; caseNo <= T; ++caseNo) {
        int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;
        
        double minDistance = findMinimumDistance(Ax, Ay, Bx, By, Cx, Cy, Dx, Dy);
        cout << fixed << setprecision(10);
        cout << "Case " << caseNo << ": " << minDistance << endl;
    }
    return 0;
}
