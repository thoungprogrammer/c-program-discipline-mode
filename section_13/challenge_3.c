#include<stdio.h>

// program to find the maximum number and minimum number between three input ( numbers )

int main(){
    int firstNum;
    int secondNum;
    int thirdNum;
    printf("Enter the first integer number: ");
    scanf("%d",&firstNum);
    printf("Enter the second integer number: ");
    scanf("%d",&secondNum);
    printf("Enter the third integer number: ");
    scanf("%d",&thirdNum);
    if ( firstNum > secondNum ){
        if( secondNum > thirdNum ){
            printf("The maximum number is %d and the minimum number is %d\n",firstNum,thirdNum);
        }
        else{
            printf("The maximum number is %d and the minimum number is %d\n", firstNum,secondNum);
        }
    }
    else if ( secondNum > thirdNum){
        if ( thirdNum > firstNum){
            printf("The maximum number is %d and the minimum number is %d\n",secondNum,firstNum);
        }
        else{
            printf("The maximum number is %d and the minimum number is %d\n",secondNum,thirdNum);
        }
    }
    else if ( thirdNum > firstNum){
        if ( firstNum > secondNum){
            printf("The maximum number is %d and the minimum number is %d\n",thirdNum,secondNum);
        }
        else{
            printf("The maximum number is %d and the minimum number is %d\n", thirdNum,firstNum);
        }
    }
    return 0;
}