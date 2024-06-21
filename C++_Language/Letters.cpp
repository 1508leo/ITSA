// English -> Strings -> 34.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=8585
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[104];
    int alphabet[26] = {0};

    cin >> str;

    // Counting the occurrences of each alphabet character
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            alphabet[str[i] - 'a']++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            alphabet[str[i] - 'A']++;
    }

    // Printing the counts
    for (int i = 0; i < 26; i++)
        cout << alphabet[i] << endl;

    return 0;
}
