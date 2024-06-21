// Basic -> 35.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30793
#include <iostream>
#include <algorithm>

using namespace std;

// Qsort
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int amount, t, m, k, prize[120], budget;

    cin >> amount;

    for(int i = 0; i < amount; i++){
        budget = 0;
        cin >> t >> m >> k; // budget, employee, items

        for(int j = 0; j < 100; j++)
            prize[j] = 0;

        for(int j = 0; j < k; j++)
            cin >> prize[j];

        qsort(prize, k, sizeof(int), compare);

        for(int j = 0; j < m; j++)
            budget += prize[j];

        if(budget > t)
            cout << "Impossible\n";
        else
            cout << budget << '\n';
    }
}