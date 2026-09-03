#include<stdio.h>

// program to find maximum and minimum float number

int main(){
    float firstNum;
    float secondNum;
    printf("Enter the first float number: ");
    scanf("%f", &firstNum);
    printf("Enter the second float number: ");
    scanf("%f", &secondNum);
    if (firstNum > secondNum) 
        printf("The maximum float number is %.2f\n",firstNum);
    else 
        printf("The minimum float number is %.2f\n", secondNum);
    return 0;
}