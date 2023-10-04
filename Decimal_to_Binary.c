#include <stdio.h>

int main(){
    int number;
    int binary[8] = {0};

    while(scanf("%d", &number) != -1){
        if(number >=0){
            for(int i = 0; i < 8; i++)
                binary[i] = 0;

            int r, t = 0;
            
            while(number != 0){
                r = number % 2;
                binary[t++] = r;
                number /= 2;
            }
        }
        else{
            for(int i = 0; i < 8; i++)
                binary[i] = 1;

            int r, t = 0;
            number = -(number + 1);

            while(number != 0){
                r = number % 2;
                binary[t++] = (r == 1) ? 0 : 1;
                number /= 2;
            }
        }
        for(int i = 7; i > -1; i--)
            printf("%d", binary[i]);

        printf("\n");
        return 0;
    }
}