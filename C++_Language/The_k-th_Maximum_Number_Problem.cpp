// English -> Sorting -> 16.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=21418
#include <iostream>
#include <algorithm>
using namespace std;

/* Qsort */
int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int rounds, amount, k;
    int *store;

    cin >> rounds;

    for(int i = 0; i < rounds; i++){
        cin >> amount >> k;

        store = new int[amount];

        for(int j = 0; j < amount; j++){
            cin >> store[j];    
        }

        qsort(store, amount, sizeof(int), compare); // Sorting

        cout << store[amount - k] << endl; // Print the k-th maximum number

        delete[] store; // free memory
    }

    return 0;
}
