#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, col;
    int **matrix;

    scanf(" %d %d", &row, &col);
    matrix = malloc(row * sizeof(int *));

    /* Get elements of matrix */
    for(int i = 0; i < row; i++){
        matrix[i] = malloc(col * sizeof(int));
        for(int j = 0; j < col; j++){
            scanf(" %d", &matrix[i][j]);
        }
    }

    /* Print elements of inverse matrix */
    for(int j = 0; j < col; j++){
        for(int i = 0; i < row; i++){
            printf("%d", matrix[i][j]);
            if(i != row -1)
                printf(" ");
        }
        printf("\n");
    }

    // Free memory
    for(int i = 0; i < row; i++){
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}