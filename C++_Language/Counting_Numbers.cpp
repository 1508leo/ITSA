// English -> Array -> 12.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=2442
#include <iostream>
#include <algorithm>
using namespace std;

/* Qsort */
int compare(const void *a, const void *b) {
    return (*(int *)b > *(int *)a) - (*(int *)b < *(int *)a);
}

int main() {
    int number[100] = {0};
    int amount = 0, temp;

    while (true) {
        cin >> temp;

        if (temp == -999)
            break;

        number[amount] = temp;
        amount++;
    }

    qsort(number, amount, sizeof(int), compare);

    int l = 1;
    temp = number[0];
    for (int i = 1; i < amount; i++) {
        if (temp == number[i]) {
            l++;
        } else {
            cout << temp << " " << l << endl;
            temp = number[i];
            l = 1;
        }
    }

    cout << temp << " " << l << endl;

    return 0;
}
