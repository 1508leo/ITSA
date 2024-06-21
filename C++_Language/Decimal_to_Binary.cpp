// Basic -> 5.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30750
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int number;
    vector<int> binary(8, 0);

    while (cin >> number) {
        if (number >= 0) { 
            fill(binary.begin(), binary.end(), 0);

            int r, t = 0;
            
            while (number != 0) {
                r = number % 2;
                binary[t++] = r;
                number /= 2;
            }
        } else {
            fill(binary.begin(), binary.end(), 1);

            int r, t = 0;
            number = -(number + 1);

            while (number != 0) {
                r = number % 2;
                binary[t++] = (r == 1) ? 0 : 1;
                number /= 2;
            }
        }
        
        reverse(binary.begin(), binary.end());
        for (int i = 0; i < binary.size(); ++i)
            cout << binary[i];
        
        cout << endl;
    }

    return 0;
}

