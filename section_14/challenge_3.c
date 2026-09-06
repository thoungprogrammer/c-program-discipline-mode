#include<stdio.h>

// program that receives an integer and and print its absolute value

int main(){
    double number;
    double absoluteNumber;
    printf("Enter the negative number: ");
    scanf("%lf",&number);
    if (number < 0){
        absoluteNumber = (-1)*number;
    }
    else{
        absoluteNumber = number;
    }
    printf("The absolute number of |%.2lf| is %.2lf\n",number,absoluteNumber);
    return 0;
}