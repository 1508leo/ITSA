// English -> Strings -> 47.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=36509
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int amount, temp, total, sign;
    char str[100000];

    cin >> amount;

    for (int i = 0; i < amount; i++) {
        cin >> str;
        total = 0;
        temp = 0;
        sign = 1;

        for (int j = 0; j < strlen(str); j++) {
            if (str[j] >= '0' && str[j] <= '9') {
                temp = temp * 10 + (str[j] - '0');
            } else {
                if (sign == 1) {
                    total += temp;
                } else if (sign == -1) {
                    total -= temp;
                }
                temp = 0;
                if (str[j] == '+')
                    sign = 1;
                else if (str[j] == '-')
                    sign = -1;
                else
                    break;
            }
        }

        cout << total << endl;
    }

    return 0;
}
