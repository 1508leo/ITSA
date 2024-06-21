// Basic -> 9.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30751
#include <iostream>

using namespace std;

int main() {
    int number, sum = 0;

    while (cin >> number) {
        sum = 0;

        for (int i = 3; i <= number; i++) {
            if (i % 3 == 0)
                sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}
