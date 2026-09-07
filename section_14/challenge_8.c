#include<stdio.h>

// program to check the year is a leap year or not 

int main(){
    int year;
    printf("Enter the year to check: ");
    scanf("%d",&year);
    if ( year % 400 == 0){
        printf("The year %d is a leap year.\n", year);
    }
    else if( year % 100 == 0){
        printf("The year %d isn't a leap year.\n", year);
    }
    else if( year % 4 == 0){
        printf("The year %d is a leap year.\n", year);
    }
    else{
        printf("The year %d isn't a leap year.\n", year);
    }
    return 0;
}