// English -> Array -> 27.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=24353
#include <iostream>

using namespace std;

int main() {
    int number, amount, total = 0, add = 0;

    cin >> amount;

    for (int i = 0; i < amount - 1; i++) {
        cin >> number;
        add += number;
        total += (i + 1);
    }
    total += amount;

    cout << total - add << endl;

    return 0;
}
