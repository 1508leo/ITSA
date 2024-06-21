// English -> String -> 22.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=1826
#include <iostream>

using namespace std;

int main(){
    int round, number, result;
    string str1, str2;

    cin >> round;

    for(int i = 0; i < round; i++){
        cin >> str1 >> str2;
        number = 0; // reset

        // Decimal value of str1
        for(int j = 0; j < 8; j++){
            number = 2 * number + (str1[j] - '0');
        }

        result = number;
        number = 0;

        // Decimal value of str2
        for(int j = 0; j < 8; j++){
            number = 2 * number + (str2[j] - '0');
        }

        result += number;

        cout << result << '\n';
    }
}