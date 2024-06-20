/* English -> Array */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30242 */
#include <stdio.h>

int main(){
    int number;

    scanf("%d", &number);

    if(number % 5 == 0)
        number /= 5;
    if(number % 3 == 0)
        number /= 3;
    if(number % 2 == 0 || number == 1)
        printf("Regular number!\n");
    else
        printf("Irregular number!\n");
    
    return 0;
}