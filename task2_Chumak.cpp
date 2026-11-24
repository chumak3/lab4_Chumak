#include <iostream>
using namespace std;

int main() {
    int k, n;
    cout << "Введіть число К та кількість повторень N (N > 0): ";
    cin >> k >> n;

    for (int i = 0; i < n; i++) {
        cout << k << " ";
    }
    cout << endl;

    return 0;
    
}