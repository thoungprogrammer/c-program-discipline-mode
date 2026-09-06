#include<stdio.h>

// program check if the two number are the same or not 

int main(){
    double firstNumber;
    double secondNumber;
    printf("Enter the first number: ");
    scanf("%lf", &firstNumber);
    printf("Enter the second number: ");
    scanf("%lf", &secondNumber);
    if (firstNumber == secondNumber){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }
}