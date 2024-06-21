// Basic -> 2.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30747
#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main() {
    int miles = 0;
    double kilometers = 0.0;

    cin >> miles;

    kilometers = 1.6 * miles; // Translate miles to kilometers

    cout << fixed << setprecision(1) << kilometers << endl; // Output kilometers with one decimal place

    return 0;
}
