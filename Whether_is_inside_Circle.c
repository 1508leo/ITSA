#include <stdio.h>

int main(){
    int x, y;

    while(scanf("%d %d", &x, &y) != -1){
        // (a^2 + b^2) <= r^2
        if((x * x + y * y) <= 10000) // r = 100
            printf("inside\n");
        else
            printf("outside\n");
    }

    return 0;
}