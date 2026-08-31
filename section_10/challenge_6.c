#include<stdio.h>

// PROGRAM TO REMOVE DECIMAL PART FROM AN INTEGER

int main(){
    float decimalNumber;
    float decimalPart;
    printf("Enter the decimal number to extract: ");
    scanf("%f",&decimalNumber);
    decimalPart = decimalNumber - (int)decimalNumber;
    printf("The decimal part of %f is %f\n",decimalNumber,decimalPart);
}