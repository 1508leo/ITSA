/* English -> Mathematics */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2859 */
#include <stdio.h>

int main(){
    int amount, cost, total=0;

    for(int i = 0; i < 3; i++){
        scanf("%d %d", &amount, &cost);

        total += amount * cost;
    }

    printf("%d\n", total);

    return 0;
}