#include<stdio.h>

// program that reads from the user 2 values of "integer" type and 
// it will print equal or not equal to the terminal 

int main(){
    int firstInt;
    int secondInt;
    printf("Enter the first integer: ");
    scanf("%d",&firstInt);
    printf("Enter the second integer: ");
    scanf("%d",&secondInt);
    if ( firstInt == secondInt){
        printf("The first integer %d is equal to the second integer %d.\n",firstInt,secondInt);
    }
    else{
        printf("The first integer %d not equal to the second integer %d.\n",firstInt,secondInt);
    }
    return 0;
}