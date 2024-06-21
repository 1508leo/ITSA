// Basic -> 12.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30761
#include <iostream>

using namespace std;

int calculate(int n) {
    if (n == 0 || n == 1) {
        return n + 1;
    } else {
        return calculate(n - 1) + calculate(n / 2);
    }
}

int main() {
    int n;
    cin >> n;

    n = calculate(n);

    cout << n << endl;

    return 0;
}
