#include<stdio.h>

// PROGRAM TO CALCULATE AND PRINT THE YEAR YOU WERE BORN
int main(){
    int currentYear;
    int yourAge;
    int bornYear;

    printf("Please enter your current year\n> ");
    scanf("%d", &currentYear);
    printf("Please enter your current age \n> ");
    scanf("%d", &yourAge);
    bornYear = currentYear - yourAge;
    printf("The year that your were born is %d.\n", bornYear);
    return 0;
}