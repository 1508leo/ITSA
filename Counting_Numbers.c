#include <stdio.h>
#include <stdlib.h>

/* Qsort */
int compare(const void *a, const void *b) {
    return (*(int *)b > *(int *)a) - (*(int *)b < *(int *)a);
}

int main(){
    int number[100] = {0};
    int amount = 0, temp;

    while(1){
        scanf(" %d", &temp);

        if(temp == -999)
            break;

        number[amount] = temp;
        amount++;
    }

    qsort(number, amount, sizeof(int), compare);

    int l = 1;
    temp = number[0];
    for(int i = 1; i < amount; i++){
        if(temp == number[i]){
            l++;
        } else {
            printf("%d %d\n", temp, l);
            temp = number[i];
            l = 1;
        }
    }

    printf("%d %d\n", temp, l);

    return 0;
}
