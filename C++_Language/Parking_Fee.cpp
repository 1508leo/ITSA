// Basic -> 4.
//https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30748
#include <iostream>
using namespace std;

int main() {
    int in_hr, in_min, out_hr, out_min, hr, min, fee = 0;

    // Input times
    cin >> in_hr >> in_min;
    cin >> out_hr >> out_min;

    // Total minutes calculation
    int total_in_minutes = in_hr * 60 + in_min;
    int total_out_minutes = out_hr * 60 + out_min;
    int total_minutes = total_out_minutes - total_in_minutes;

    // Calculate hours and remaining minutes
    hr = total_minutes / 60;
    min = total_minutes % 60;

    // Determine additional hour if more than 30 minutes
    if (min >= 30) {
        min = 1;
    } else {
        min = 0;
    }

    // Calculate fee based on hours parked
    if (hr >= 4) { // Over 4 hours
        fee += (hr - 4) * 2 * 60 + min * 60 + 160 + 120;
    } else if (hr >= 2) { // Between 2 to 4 hours
        fee += (hr - 2) * 2 * 40 + min * 40 + 120;
    } else { // Less than 2 hours
        fee += hr * 2 * 30 + min * 30;
    }

    // Output the parking fee
    cout << fee << endl;

    return 0;
}
