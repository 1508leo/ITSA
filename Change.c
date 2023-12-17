/* Basic */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30756 */
#include <stdio.h>

int main(){
    int amount, a1, a2, a3;
    int cost, r1, r2, r3;

    scanf("%d,%d,%d,%d", &amount, &a1, &a2, &a3);
    cost = a1 * 15 + a2 * 20 + a3 * 30;

    if(amount < cost)
        printf("0\n");
    else{
        amount -= cost;

        r3 = amount / 50;
        amount %= 50;
        r2 = amount / 5;
        amount %= 5;
        r1 = amount;

        printf("%d,%d,%d\n", r1, r2, r3);
    }

    return 0;
}