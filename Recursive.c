/* Basic -> Recursive */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761 */
#include <stdio.h>

int calculate(int n){
    if(n == 0 || n == 1){
        return n + 1;
    }
    else{
        return calculate(n - 1) + calculate(n / 2);
    }
}

int main(){
    int n;

    scanf("%d", &n);

    n = calculate(n);

    printf("%d\n", n);

    return 0;
}