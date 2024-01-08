/* English -> Mathematics */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=238 */
#include <stdio.h>
int main(){
    int a, b, amout;

    while(scanf("%d %d", &a, &b) != -1){
        amout = 0;

        for(int i = 0; i < 6; i++){
            if(((b - a) % 100) == 0)
                amout++;
            
            b = b / 10;
        }

        printf("%d\n", amout);
    }

    return 0;
}