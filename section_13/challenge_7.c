#include<stdio.h>

// program that read the integer value from the user and check if
// the three number is equal or not 

int main(){
    int firstInt;
    int secondInt;
    int thridInt;
    printf("Enter the first integer number: ");
    scanf("%d",&firstInt);
    printf("Enter the second integer number: ");
    scanf("%d",&secondInt);
    printf("Enter the third integer number: ");
    scanf("%d",&thridInt);
    if( firstInt == secondInt && firstInt == thridInt){
        printf("The three number is equal %d = %d = %d\n",firstInt,secondInt,thridInt);
    }
    else{
        printf("The three number is not equal %d != %d != %d",firstInt,secondInt,thridInt);
    }
    return 0;
}