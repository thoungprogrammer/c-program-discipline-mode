#include<stdio.h>

// program to take the three digit number from the user and print "ASCENDING" or "NOT ASCENDING"

int main(){
    int threeDigits;
    int firstDigit;
    int secondDigit;
    int thirdDigit;
    printf("Enter the three digits ( Ex: 123 )\n");
    printf("> ");
    scanf("%d",&threeDigits);

    thirdDigit = (threeDigits%100)%10; 
    secondDigit = (threeDigits%100)/10;
    firstDigit = threeDigits/100;
    printf("%d%d%d\n",firstDigit,secondDigit,thirdDigit);
    
    if ( firstDigit < secondDigit && secondDigit < thirdDigit){
        printf("The number %d is ASCENDING. \n", threeDigits);
    }
    else{
        printf("The number %d is not ASCENDING.\n", threeDigits);
    }
    return 0;
}

