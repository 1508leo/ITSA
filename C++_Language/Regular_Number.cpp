// English -> Array -> 
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30242
#include <iostream>

using namespace std;

int main() {
    int number;

    cin >> number;

    if (number % 5 == 0) {
        number /= 5;
    }
    if (number % 3 == 0) {
        number /= 3;
    }
    if (number % 2 == 0 || number == 1) {
        cout << "Regular number!" << endl;
    } else {
        cout << "Irregular number!" << endl;
    }

    return 0;
}
