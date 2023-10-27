/* English -> Sorting */
#include <stdio.h>
#include <stdlib.h>

/* Qsort */
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int *matrix;
    int rounds, size;

    scanf(" %d", &rounds);

    for(int i = 0; i < rounds; i++){
        scanf(" %d", &size);

        matrix = malloc(2 * size * sizeof(int));

        /* Store elements */
        for(int j = 0; j < size; j++){
            scanf(" %d", &matrix[j]);
        }

        for(int j = 0; j < size; j++){
            scanf(" %d", &matrix[size + j]);
        }

        /* Sorting */
        qsort(matrix, (2 * size), sizeof(int), compare);

        printf("%d\n", matrix[size - 1]);

        free(matrix);
    }

    return 0;
}