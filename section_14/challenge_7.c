#include<stdio.h>

// program to check the three number is divisible or not

int main(){
    int firstInt;
    int secondInt;
    int thirdInt;
    printf("Enter the first integer: ");
    scanf("%d", &firstInt);
    printf("Enter the second integer: ");
    scanf("%d", &secondInt);
    printf("Enter the third integer: ");
    scanf("%d", &thirdInt);
    if ( firstInt % secondInt == 0 || secondInt % thirdInt == 0 || thirdInt % firstInt == 0  ){
        printf("The number (%d,%d,%d) is divisible.\n",firstInt,secondInt,thirdInt);
    }
    else{
        printf("The number (%d,%d,%d) is none-divisible.\n",firstInt,secondInt,thirdInt);
    }
}