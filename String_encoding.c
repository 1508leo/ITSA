/* English -> String */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=68 */
#include <stdio.h>
#include <string.h>

int main(){
    char str[10000];
    int len, number;

    while(scanf(" %s", str) != EOF){
        len = strlen(str);
        number = 0;

        for(int i = 0; i < len; i++){
            number = 26 * number + (str[i] - 'A' + 1); // Each character run 26 rounds to next one
        }

        printf("%d\n", number);
    }
}