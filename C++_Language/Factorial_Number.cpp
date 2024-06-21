// English -> MAthematics -> 31.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=1832
#include <iostream>

using namespace std;

int main() {
    int amount, number, total;

    cin >> amount;

    for (int i = 0; i < amount; i++) {
        cin >> number;
        total = 1;

        for (int j = 1; j <= number; j++) {
            total *= j;
        }

        cout << total << endl;
    }

    return 0;
}
