/* English -> String */     /* Fail */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=362 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char target[85];
    char str[85];
    char ch;
    int amount, len, number, position, base[26] = {0}, compare[26] = {0};
    int fail;

    scanf(" %s", target);

    len = strlen(target);

    for(int i = 0; i < len; i++){
        target[i] = tolower(target[i]);
        base[target[i] - 'a']++;
    }

    scanf(" %d", &amount);

    for(int i = 0; i < amount; i++){
        scanf(" %s", str);
        number = len;
        fail = 0;

        for(int j = 0; j < 26; j++){
            compare[j] = base[j];
        }

        if(strlen(str) != len){
            continue;
        }
        else{
            for(int j = 0; j < len; j++){
                ch = tolower(str[j]);
                position = ch - 'a';
                if(compare[position] != 0){
                    compare[position]--;
                    number--;
                }
                else
                    break;
            }

            if(number == 0){
                for(int j = 0; j < len; j++){
                    if(compare[j] != 0)
                        fail = 1;
                }
            }

            if(number == 0 && fail == 0)
                printf("%s\n", str);
        }
    }
}