// Basic -> 10.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30757
#include <iostream>

using namespace std;

int main() {
    int a, b, temp;

    cin >> a >> b;

    while (true) {
        if (a < b) {
            // Switch a and b
            temp = a;
            a = b;
            b = temp;
        }

        if (a % b == 0) {
            cout << b << endl;
            return 0;
        } else {
            a %= b;
        }
    }

    return 0;
}
