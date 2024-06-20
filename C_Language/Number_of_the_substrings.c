/* Basic */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30768 */
#include <stdio.h>
#include <string.h>

int main(){
    char str[1000], subset[150];
    char *ptr;
    int amount = 0;

    scanf("%s", subset);
    scanf("%s", str);

    ptr = strstr(str, subset);

    while(ptr != NULL){
        amount++;
        ptr = strstr(ptr + 1, subset);
    }

    printf("%d\n", amount);

    return 0;
}