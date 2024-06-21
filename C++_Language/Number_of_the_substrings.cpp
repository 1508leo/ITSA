// Basic -> 16.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30768
#include <iostream>
#include <string>

using namespace std;

int main() {
    string subset, str;
    size_t pos = 0, found = 0;

    cin >> subset >> str;

    // Find occurrences of subset in str
    while ((pos = str.find(subset, pos)) != string::npos) {
        found++;
        pos ++; // Move to next character
    }

    cout << found << endl;

    return 0;
}
