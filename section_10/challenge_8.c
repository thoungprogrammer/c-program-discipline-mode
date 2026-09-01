#include<stdio.h>

// program that print the reversed number 

int main(){
    int threeDigit;
    int unit;
    int tenth;
    int hundredth;

    printf("Enter the three digits (Ex. 123): ");
    scanf("%d",&threeDigit);

    unit = (threeDigit%10)%10;
    tenth = (threeDigit%100)/10;
    hundredth = threeDigit/100;

    printf("The reverse number of %d is %d%d%d\n",threeDigit,unit,tenth,hundredth);

    return 0;
}