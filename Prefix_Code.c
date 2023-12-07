/* English -> Sorting */ /* Wrong */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=22935 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int rounds, amount, fail;
    char str[38];
    int *alphabet;

    scanf(" %d", &rounds);

    for(int i = 0; i < rounds; i++){
        fail = 0;
        alphabet = malloc(62 * sizeof(int));
        for(int i = 0; i < 62; i++){
            alphabet[i] = 0;
        }

        scanf(" %d", &amount);

        for(int j = 0; j < amount; j++){
            scanf(" %s", str);

            if(str[0] >= 'a' && str[0] <= 'z'){
                if(alphabet[str[0] - 'a'] > 0){
                    fail = 1;
                }
                alphabet[str[0] - 'a']++;
            }
            else if(str[0] >= 'A' && str[0] <= 'Z'){
                if(alphabet[str[0] - 'A' + 26] > 0){
                    fail = 1;
                }
                alphabet[str[0] - 'A' + 26]++;
            }
            else{
                if(alphabet[str[0] - '0' + 52] > 0){
                    fail = 1;
                }
                alphabet[str[0] - '0' + 52]++;
            }
        }

        free(alphabet);

        if(fail == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}