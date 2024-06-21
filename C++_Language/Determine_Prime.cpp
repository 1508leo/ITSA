// Basic -> 8.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30752
#include <iostream>

using namespace std;

int main() {
    int number;

    while (cin >> number) {
        bool isPrime = true;

        if (number <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i < number; i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
