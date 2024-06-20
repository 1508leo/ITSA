/* English -> Strings */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=8585 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[104];
    int alphabet[26]={0};

    scanf("%s", str);
    /* Counting the amount of characters */
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            alphabet[str[i] - 'a']++;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            alphabet[str[i] - 'A']++;
    }
    for(int i = 0; i < 26; i++)
        printf("%d\n", alphabet[i]);
}