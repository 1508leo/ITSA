/* English -> String */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1826 */
#include <stdio.h>

int main(){
    char str1[9], str2[9];
    int round, number, result;

    scanf(" %d", &round);

    for(int i = 0; i < round; i++){
        scanf("%s %s", str1, str2);
        number = 0;

        // Decimal value of str1
        for(int j = 0; j < 8; j++){
            number = 2 * number + (str1[j] - '0');
        }

        result = number;
        number = 0;

        // Decimal value of str2
        for(int j = 0; j < 8; j++){
            number = 2 * number + (str2[j] - '0');
        }

        result += number;

        printf("%d\n", result);
    }
}