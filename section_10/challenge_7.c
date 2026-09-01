#include<stdio.h>

// program that calculate the sum of three digits 

int main(){
    int threeDigits;
    int unit;
    int tenth;
    int hundredth;
    int sumDigits;
    printf("Please enter the three digits: ");
    scanf("%d",&threeDigits);
    hundredth = threeDigits/100;
    tenth = (threeDigits%100)/10;
    unit = (threeDigits%10)%10;
    sumDigits = hundredth + tenth + unit;
    printf("The sum of the digits is %d+%d+%d = %d\n",hundredth,tenth,unit,sumDigits);
    return 0;
}

// 123 / 100 = 1
// 123 % 10 = 23 / 10 = 2
