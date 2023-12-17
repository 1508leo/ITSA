/* Basic -> Show number */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30746 */
#include <stdio.h>

int main(){
    char one[5][6] = {"    *", "    *", "    *", "    *", "    *"};
    char two[5][6] = {"*****", "    *", "*****", "*    ", "*****"};
    char three[5][6] = {"*****", "    *", "*****", "    *", "*****"};
    char four[5][6] = {"*   *", "*   *", "*****", "    *", "    *"};
    char five[5][6] = {"*****", "*    ", "*****", "    *", "*****"};
    char six[5][6] = {"*    ", "*    ", "*****", "*   *", "*****"};
    char seven[5][6] = {"*****", "    *", "    *", "    *", "    *"};
    char eight[5][6] = {"*****", "*   *", "*****", "*   *", "*****"};
    char nine[5][6] = {"*****", "*   *", "*****", "    *", "    *"};
    char zero[5][6] = {"*****", "*   *", "*   *", "*   *", "*****"};

    int number;

    scanf("%d", &number);

    int f = number / 1000;
    int s = (number / 100) - 10 * f;
    int t = (number / 10) - 100 * f - 10 * s;
    int l = number % 10;

    for(int i = 0; i < 5; i++){
        switch(f){
            case 0:
                    printf("%s ", zero[i]);
                    break;
            case 1:
                    printf("%s ", one[i]);
                    break;
            case 2:
                    printf("%s ", two[i]);
                    break;
            case 3:
                    printf("%s ", three[i]);
                    break;
            case 4:
                    printf("%s ", four[i]);
                    break;
            case 5:
                    printf("%s ", five[i]);
                    break;
            case 6:
                    printf("%s ", six[i]);
                    break;
            case 7:
                    printf("%s ", seven[i]);
                    break;
            case 8:
                    printf("%s ", eight[i]);
                    break;
            case 9:
                    printf("%s ", nine[i]);
                    break;
            
        }

        switch(s){
            case 0:
                    printf("%s ", zero[i]);
                    break;
            case 1:
                    printf("%s ", one[i]);
                    break;
            case 2:
                    printf("%s ", two[i]);
                    break;
            case 3:
                    printf("%s ", three[i]);
                    break;
            case 4:
                    printf("%s ", four[i]);
                    break;
            case 5:
                    printf("%s ", five[i]);
                    break;
            case 6:
                    printf("%s ", six[i]);
                    break;
            case 7:
                    printf("%s ", seven[i]);
                    break;
            case 8:
                    printf("%s ", eight[i]);
                    break;
            case 9:
                    printf("%s ", nine[i]);
                    break;
            
        }

        switch(t){
            case 0:
                    printf("%s ", zero[i]);
                    break;
            case 1:
                    printf("%s ", one[i]);
                    break;
            case 2:
                    printf("%s ", two[i]);
                    break;
            case 3:
                    printf("%s ", three[i]);
                    break;
            case 4:
                    printf("%s ", four[i]);
                    break;
            case 5:
                    printf("%s ", five[i]);
                    break;
            case 6:
                    printf("%s ", six[i]);
                    break;
            case 7:
                    printf("%s ", seven[i]);
                    break;
            case 8:
                    printf("%s ", eight[i]);
                    break;
            case 9:
                    printf("%s ", nine[i]);
                    break;
            
        }

        switch(l){
            case 0:
                    printf("%s\n", zero[i]);
                    break;
            case 1:
                    printf("%s\n", one[i]);
                    break;
            case 2:
                    printf("%s\n", two[i]);
                    break;
            case 3:
                    printf("%s\n", three[i]);
                    break;
            case 4:
                    printf("%s\n", four[i]);
                    break;
            case 5:
                    printf("%s\n", five[i]);
                    break;
            case 6:
                    printf("%s\n", six[i]);
                    break;
            case 7:
                    printf("%s\n", seven[i]);
                    break;
            case 8:
                    printf("%s\n", eight[i]);
                    break;
            case 9:
                    printf("%s\n", nine[i]);
                    break;
            
        }
    }
    
    return 0;
}