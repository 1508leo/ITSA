#include <stdio.h>

int main(){
    int number, sum=0;

    while(scanf(" %d", &number) != -1){
        for(int i = 3; i <= number; i++){
            if(i % 3 == 0)
                sum += i;
        }

        printf("%d\n", sum);
    }

    return 0;
}