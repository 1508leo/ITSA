/* Basic */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=15947 */

#include <stdio.h>

int main(){
    float h, m;

    while(scanf("%f %f", &h, &m) != -1){
        if(m == 1){
            printf("%.1f\n", (h - 80) * 0.7);
        }
        else
            printf("%.1f\n", (h - 70) * 0.6);
    }

    return 0;
}