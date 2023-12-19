/* English -> Array */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=24353 */
#include <stdio.h>

int main(){
    int number, amount, total = 0, add = 0;

    scanf("%d", &amount);

    for(int i = 0; i < amount - 1; i++){
        scanf(" %d", &number);
        add += number;
        total += (i + 1);
    }
    total += amount;

    printf("%d\n", total - add);

    return 0;
}