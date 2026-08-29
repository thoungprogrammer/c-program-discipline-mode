#include<stdio.h>

// PROGRAM THAT GET 3 GRADES(INTEGER) AND CALCULATE THE AVERAGE VALUE

int main(){
    int firstGrade;
    int secondGrade;
    int thirdGrade;
    double averageGrade;
    printf("Enter the first grade in integer: ");
    scanf("%d",&firstGrade);
    printf("Enter the second grade in integer: ");
    scanf("%d",&secondGrade);
    printf("Enter the third grade in integer: ");
    scanf("%d",&thirdGrade);
    averageGrade = (firstGrade + secondGrade + thirdGrade)/(float)3;
    printf("The average grade is %.2f.\n",averageGrade);
    return 0;
}