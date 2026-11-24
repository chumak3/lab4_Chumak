#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, h;
    cout << "Введіть початок відрізка a, кінець b та крок h: ";
    cin >> a >> b >> h;

    cout << "\n+------------+------------+\n";
    cout << "|     x      |     Y      |\n";
    cout << "+------------+------------+\n";

    cout << fixed << setprecision(4);

    for (double x = a; x <= b + 1e-9; x += h) {
        if (x < 0) {
            cout << "| " << setw(10) << x << " |  не існує  |\n";
        } else {
            double y = sqrt(x) + cos(x) - 3;
            cout << "| " << setw(10) << x << " | " << setw(10) << y << " |\n";
        }
    }

    cout << "+------------+------------+\n";

    return 0;
}