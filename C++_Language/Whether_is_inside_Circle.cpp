// Basic -> 3.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30749
#include <iostream>

using namespace std;

int main() {
    int x, y;

    while (cin >> x >> y) {
        // (a^2 + b^2) <= r^2
        if ((x * x + y * y) <= 10000) // r = 100
            cout << "inside" << endl;
        else
            cout << "outside" << endl;
    }

    return 0;
}
