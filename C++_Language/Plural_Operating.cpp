// Basic -> 7.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30755
#include <iostream>

using namespace std;

int main(){
    int amount, a_1, b_1, a_2, b_2, a, b;
    char operation;

    cin >> amount;

    for(int i = 0; i < amount; i++){
        cin >> operation >> a_1 >> b_1 >> a_2 >> b_2;
        
        if(operation == '+'){
            a = a_1 + a_2;
            b = b_1 + b_2;
        }
        else if(operation == '-'){
            a = a_1 - a_2;
            b = b_1 - b_2;
        }
        else if(operation == '*'){
            a = (a_1 * a_2) - (b_1 * b_2);
            b = (a_1 * b_2) + (a_2 * b_1);
        }
        else if(operation == '/'){
            a = (a_1 * a_2 + b_1 * b_2) / (a_2 * a_2 + b_2 * b_2);
            b = (a_2 * b_1 - a_1 * b_2) / (a_2 * a_2 + b_2 * b_2);
        }

        cout << a << " " << b << '\n';
    }

    return 0;
}
// a + bi * c - di
// c + di * c - di