// Basic -> 23.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30756
#include <iostream>

using namespace std;

int main(){
    int amount, a1, a2, a3;
    char c;
    int cost, r1, r2, r3;

    cin >> amount >> c >> a1 >> c >> a2 >> c >> a3;
    cost = a1 * 15 + a2 * 20 + a3 * 30;

    if(amount < cost)
        cout << "0\n";
    else{
        amount -= cost;

        r3 = amount / 50;
        amount %= 50;
        r2 = amount / 5;
        amount %= 5;
        r1 = amount;

       cout << r1 << "," << r2 << "," << r3 << '\n';
    }
}