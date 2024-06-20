/* Basic */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30786 */
#include <stdio.h>

/* Qsort */
int compare(const void *a, const void *b) {
    return (*(float *)a > *(float *)b) - (*(float *)a < *(float *)b);
}

int main(){
    float number[10];

    for(int i = 0; i < 10; i++){
        scanf(" %f", &number[i]);
    }

    qsort(number, 10, sizeof(float), compare);

    printf("maximum:%.2f\n", number[9]);
    printf("minimum:%.2f\n", number[0]);
}