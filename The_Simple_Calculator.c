/* English -> Strings */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=19521 */
#include <stdio.h>
#include <string.h>

int main(){
    int amount, temp, total, sign;
    char str[100000];

    scanf(" %d", &amount);

    for(int i = 0; i < amount; i++){
        scanf(" %s", str);
        total = 0;
        temp = 0;
        sign = 1;

        for(int j = 0; j < strlen(str); j++){
            if(str[j] >= '0' && str[j] <= '9'){
                temp = temp * 10 + (str[j] - '0');
            }
            else {
                if(sign == 1){
                    total += temp;
                }
                else if(sign == -1){
                    total -= temp;
                }
                temp = 0;
                if(str[j] == '+')
                    sign = 1;
                else if(str[j] == '-')
                    sign = -1;
                else
                    break;
            }
        }

        printf("%d\n", total);
    }

    return 0;
}