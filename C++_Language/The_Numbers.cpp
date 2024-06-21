// English -> Mathematics -> 7.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=238
#include <iostream>
using namespace std;

int main() {
    int a, b, amount;

    while (cin >> a >> b) {
        amount = 0;

        for (int i = 0; i < 6; i++) {
            if (((b - a) % 100) == 0)
                amount++;

            b = b / 10;
        }

        cout << amount << endl;
    }

    return 0;
}
