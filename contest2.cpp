#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        double A, B, C, D;
        cin >> A >> B >> C >> D;

        double maxArea = 0.0;

        // Calculate area with sides A, B, C
        maxArea = max(maxArea, calculateArea(A, B, C));

        // Calculate area with sides A, B, D
        maxArea = max(maxArea, calculateArea(A, B, D));

        // Calculate area with sides A, C, D
        maxArea = max(maxArea, calculateArea(A, C, D));

        // Calculate area with sides B, C, D
        maxArea = max(maxArea, calculateArea(B, C, D));

        cout << fixed << setprecision(2) << maxArea << endl;
    }

    return 0;
}
