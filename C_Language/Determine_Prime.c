#include <stdio.h>

int main(){
    int number;

    while(scanf(" %d", &number) != -1){

        for(int i = 2; i < number; i++){
            if(number % i == 0){
                number = -1;
                break;
            }
        }

        if(number == -1 || number == 1)
            printf("NO\n");
        else  
            printf("YES\n");
    }

    return 0;
}