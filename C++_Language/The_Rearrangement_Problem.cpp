// English -> Sorting -> 22.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=36511
#include <iostream>
#include <algorithm>

using namespace std;

/* Qsort */
int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int rounds, amount;
    int *store;

    cin >> rounds;

    for(int i = 0; i < rounds; i++){
        cin >> amount;

        store = new int[amount];

        for(int j = 0; j < amount; j++){
            cin >> store[j];
        }

        qsort(store, amount, sizeof(int), compare); // Sorting

        /* Smallest */
        for(int j = 0; j < amount; j++){
            cout << store[j];
        }

        cout << endl;

        /* Greatest */
        for(int j = amount - 1; j >= 0; j--){
            cout << store[j];
        }

        cout << endl;

        delete[] store;
    }

    return 0;
}
