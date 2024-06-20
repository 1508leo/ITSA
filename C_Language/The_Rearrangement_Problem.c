/* English -> Sorting */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=36511 */
#include <stdio.h>
#include <stdlib.h>

/* Qsort */
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int rounds, amount;
    int *store;

    scanf(" %d", &rounds);

    for(int i = 0; i < rounds; i++){
        scanf("%d", &amount);

        store = malloc(amount * sizeof(int));

        for(int j = 0; j < amount; j++){
            scanf(" %d", &store[j]);
        }

        qsort(store, amount, sizeof(int), compare); // Sorting

        /* Smallest */
        for(int j = 0; j < amount; j++){
            printf("%d", store[j]);
        }

        printf("\n");

        /* Greatest */
        for(int j = amount - 1; j > -1; j--){
            printf("%d", store[j]);
        }

        printf("\n");

        free(store);
    }
}