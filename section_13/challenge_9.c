#include<stdio.h>

// program that read an input and check is it positive or zero or negative

int main(){
    double number;
    printf("Enter the number to check: ");
    scanf("%lf",&number);
    if( number >= 0 ){
        printf("The number %.2lf is positive.\n",number);
    }
    else if( number == 0){
        printf("The number %.2lf is zero.\n",number);
    }
    else{
        printf("The number %.2lf is negative.\n",number);
    }
    return 0;
}