#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введіть три цілих числа (A, B, C): ";
    cin >> a >> b >> c;

    bool res = (a < 0) || (b < 0) || (c < 0);

    cout << boolalpha << res << endl;

    return 0;
}