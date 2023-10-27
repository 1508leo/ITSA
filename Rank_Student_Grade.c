/* English -> Sorting */
#include <stdio.h>
#include <string.h>

// Store information of students
struct student{
    int number;
    char name[100];
    int grade;
    int rank;
};

struct student class[1000];

int main(){
    int number, grade, rank, amount=0;
    char name[100];
    int ranking[2][100] = {0};

    // Only 6 students
    for(int i = 0; i < 6; i++){
        scanf(" %d %s %d", &number, name, &grade);

        // Store data
        class[amount].number = number;
        strcpy(class[amount].name, name);
        class[amount].grade = grade;

        ranking[0][amount] = grade;
        amount++;
    }

    // Rank
    for(int i = 0; i < amount; i++){
        ranking[1][i]++;
        for(int j = 0; j < amount; j++){
            if(ranking[0][i] < ranking[0][j])
                ranking[1][i]++;
        }

        class[i].rank = ranking[1][i];
    }

    // Print
    for(int i = 0; i < amount; i++){
        printf("%d %s %d %d\n", class[i].number, class[i].name, class[i].grade, class[i].rank);
    }

    return 0;
}