#include <stdio.h>

int main(){
    int miles=0;
    double kilometers=0;

    scanf("%d", &miles);
    
    kilometers = 1.6 * miles; // Translate
    printf("%.1f\n", kilometers);

    return 0;
}