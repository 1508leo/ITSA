/* English -> Sorting */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=21418 */
#include <stdio.h>
#include <stdlib.h>

/* Qsort */
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int rounds, amount, k;
    int *store;

    scanf(" %d", &rounds);

    for(int i = 0; i < rounds; i++){

        scanf(" %d %d", &amount, &k);

        store = malloc(amount * sizeof(int));

        for(int j = 0; j < amount; j++){
            scanf(" %d", &store[j]);    
        }

        qsort(store, amount, sizeof(int), compare); // Sorting

        printf("%d\n", store[amount - k]); // Print the k-th maximum number

        free(store); // free memory
    }

    return 0;
}