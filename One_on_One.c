/* English -> Sorting */
#include <stdio.h>
#include <stdlib.h>

/* Qsort */
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int amount, win=0, s1=0, s2=0;
    int *enemy, *player;

    while(1){
        scanf(" %d", &amount);
        if(amount == 0)
            break;

        // Reset
        win = 0;
        s1 = 0;
        s2 = 0;

        enemy = malloc(amount * sizeof(int));
        player = malloc(amount * sizeof(int));

        for(int i = 0; i < amount; i++)
            scanf(" %d", &enemy[i]);
        
        for(int i = 0; i < amount; i++)
            scanf(" %d", &player[i]);

        qsort(enemy, amount, sizeof(int), compare);
        qsort(player, amount, sizeof(int), compare);

        // Compare
        while(s2 < amount){
            if(enemy[s1] < player[s2]){
                win++;
                s1++;
                s2++;
            }
            else{
                s2++;
            }
        }

        free(enemy);
        free(player);

        printf("%d\n", win);
    }

    return 0;
}
