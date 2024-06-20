#include <stdio.h>

int  main(){
    int a, b, temp;

    scanf(" %d %d", &a, &b);

    while(1){
        if(a < b){
            // Switch a and b
            temp = a;
            a = b;
            b = temp;
        }

        if(a % b == 0){
            printf("%d\n", b);
            return 0;
        }
        else{
            a %= b;
        }
    }

    return 0;
}