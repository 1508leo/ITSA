// Basic -> 1.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30746
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For reverse

using namespace std;

int main() {
    vector <string> one, two, three, four, five; 

    string number = "0000";

    cin >> number;

    for(int i = 0; i < 4; i++){
        if(number[i] == '0'){
            one.push_back("*****");
            two.push_back("*   *");
            three.push_back("*   *");
            four.push_back("*   *");
            five.push_back("*****");
        }
        else if(number[i] == '1'){
            one.push_back("    *");
            two.push_back("    *");
            three.push_back("    *");
            four.push_back("    *");
            five.push_back("    *");
        }
        else if(number[i] == '2'){
            one.push_back("*****");
            two.push_back("    *");
            three.push_back("*****");
            four.push_back("*    ");
            five.push_back("*****");
        }
        else if(number[i] == '3'){
            one.push_back("*****");
            two.push_back("    *");
            three.push_back("*****");
            four.push_back("    *");
            five.push_back("*****");
        }
        else if(number[i] == '4'){
            one.push_back("*   *");
            two.push_back("*   *");
            three.push_back("*****");
            four.push_back("    *");
            five.push_back("    *");
        }
        else if(number[i] == '5'){
            one.push_back("*****");
            two.push_back("*    ");
            three.push_back("*****");
            four.push_back("    *");
            five.push_back("*****");
        }
        else if(number[i] == '6'){
            one.push_back("*    ");
            two.push_back("*    ");
            three.push_back("*****");
            four.push_back("*   *");
            five.push_back("*****");
        }
        else if(number[i] == '7'){
            one.push_back("*****");
            two.push_back("    *");
            three.push_back("    *");
            four.push_back("    *");
            five.push_back("    *");
        }
        else if(number[i] == '8'){
            one.push_back("*****");
            two.push_back("*   *");
            three.push_back("*****");
            four.push_back("*   *");
            five.push_back("*****");
        }
        else if(number[i] == '9'){
            one.push_back("*****");
            two.push_back("*   *");
            three.push_back("*****");
            four.push_back("    *");
            five.push_back("    *");
        }
    }

    for(int i = 0; i < 4; i++){
        cout << one[i];
        if(i != 3)
            cout << " ";
    }
    cout << '\n';

    for(int i = 0; i < 4; i++){
        cout << two[i];
        if(i != 3)
            cout << " ";
    }
    cout << '\n';

    for(int i = 0; i < 4; i++){
        cout << three[i];
        if(i != 3)
            cout << " ";
    }
    cout << '\n';

    for(int i = 0; i < 4; i++){
        cout << four[i];
        if(i != 3)
            cout << " ";
    }
    cout << '\n';

    for(int i = 0; i < 4; i++){
        cout << five[i];
        if(i != 3)
            cout << " ";
    }
    cout << '\n';

    return 0;
}
