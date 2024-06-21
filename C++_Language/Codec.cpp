// English -> Array -> 22.
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[1000];

    cin >> str;

    for (int i = 0; i < strlen(str); i++) {
        cout << static_cast<char>(str[i] - 3);
    }

    cout << endl;

    return 0;
}
