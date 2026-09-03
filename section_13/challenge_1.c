#include<stdio.h>

// even or odd program

int main(){
    int integerNum;
    printf("Please enter an integer number: ");
    scanf("%d",&integerNum);
    if (integerNum % 2 == 0) 
        printf("The number %d is even number.\n",integerNum);
    else
        printf("The number %d is odd number.\n",integerNum);
    return 0;
}