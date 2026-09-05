#include<stdio.h>

// program to take the grade from the user and give some sentence back

int main(){
    double userGrade;
    printf("Please enter your grade: ");
    scanf("%lf", &userGrade);
    if ( userGrade >= 80){
        printf("Excellent Job!. You trying very hard to get that grade.\n");
    }
    else{
        if ( userGrade >= 60){
            printf("Not bad... you are the best guy.\n");
        }
        else{
            printf("Fuck you idiot! You didn't pass. Just trying again next year.\n");
        }
    }
    return 0;
}