// Basic -> 21.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30786
#include <iostream>
#include <iomanip> // std::setprecision
#include <algorithm>

using namespace std;

// Comparison function for sorting floats
bool compare(float a, float b) {
    return a < b;
}

int main() {
    float number[10];

    // Input numbers
    for (int i = 0; i < 10; i++) {
        cin >> number[i];
    }

    // Sort numbers using std::sort
    sort(number, number + 10, compare);

    // Output results
    cout << "maximum:" << fixed << setprecision(2) << number[9] << endl;
    cout << "minimum:" << fixed << setprecision(2) << number[0] << endl;

    return 0;
}
