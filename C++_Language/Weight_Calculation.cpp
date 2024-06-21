// Basic -> 34.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30792
#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main() {
    float h, m;

    while (cin >> h >> m) {
        if (m == 1) {
            cout << fixed << setprecision(1) << (h - 80) * 0.7 << endl;
        } else {
            cout << fixed << setprecision(1) << (h - 70) * 0.6 << endl;
        }
    }

    return 0;
}
