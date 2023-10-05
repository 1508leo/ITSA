#include <stdio.h>

int main(){
    int amount, a_1, b_1, a_2, b_2, a, b;
    char operation;

    scanf("%d", &amount);

    for(int i = 0; i < amount; i++){
        scanf(" %c %d %d %d %d", &operation, &a_1, &b_1, &a_2, &b_2);
        
        if(operation == '+'){
            a = a_1 + a_2;
            b = b_1 + b_2;
        }
        else if(operation == '-'){
            a = a_1 - a_2;
            b = b_1 - b_2;
        }
        else if(operation == '*'){
            a = (a_1 * a_2) - (b_1 * b_2);
            b = (a_1 * b_2) + (a_2 * b_1);
        }
        else if(operation == '/'){
            a = (a_1 * a_2 + b_1 * b_2) / (a_2 * a_2 + b_2 * b_2);
            b = (a_2 * b_1 - a_1 * b_2) / (a_2 * a_2 + b_2 * b_2);
        }

        printf("%d %d\n", a, b);
    }

    return 0;
}
// a + bi * c - di
// c + di * c - di