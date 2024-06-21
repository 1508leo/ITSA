// English -> Mathematics -> 47.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=2859
#include <iostream>

using namespace std;

int main() {
    int amount, cost, total = 0;

    for (int i = 0; i < 3; i++) {
        cin >> amount >> cost;

        total += amount * cost;
    }

    cout << total << endl;

    return 0;
}
