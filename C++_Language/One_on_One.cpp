// English -> Sorting -> 3.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=1795
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Comparison function for sorting integers
bool compare(int a, int b) {
    return a < b;
}

int main() {
    int amount, win = 0, s1 = 0, s2 = 0;

    while (true) {
        cin >> amount;
        if (amount == 0)
            break;

        // Reset variables
        win = 0;
        s1 = 0;
        s2 = 0;

        vector<int> enemy(amount);
        vector<int> player(amount);

        // Input enemies' strengths
        for (int i = 0; i < amount; i++)
            cin >> enemy[i];

        // Input players' strengths
        for (int i = 0; i < amount; i++)
            cin >> player[i];

        // Sort arrays
        sort(enemy.begin(), enemy.end(), compare);
        sort(player.begin(), player.end(), compare);

        // Compare strengths
        while (s2 < amount) {
            if (enemy[s1] < player[s2]) {
                win++;
                s1++;
                s2++;
            } else {
                s2++;
            }
        }

        // Output the number of wins
        cout << win << endl;
    }

    return 0;
}
