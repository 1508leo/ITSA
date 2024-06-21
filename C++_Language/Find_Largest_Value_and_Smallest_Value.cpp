// Einglish -> Array -> 42.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=29748
#include <iostream>
#include <algorithm>

using namespace std;

// Comparison function for sorting
bool compare(int a, int b) {
    return a < b;
}

int main() {
    int number[10];

    // Input numbers
    for (int i = 0; i < 10; i++) {
        cin >> number[i];
    }

    // Sort numbers using std::sort
    sort(number, number + 10, compare);

    // Output results
    cout << "Largest number = " << number[9] << endl;
    cout << "Smallest number = " << number[0] << endl;

    return 0;
}
