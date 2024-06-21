// English -> String -> 2.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=68
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int number;

    while (cin >> str) {
        number = 0;

        for (int i = 0; i < str.length(); i++) {
            number = 26 * number + (str[i] - 'A' + 1);
        }

        cout << number << endl;
    }

    return 0;
}
