#include<stdio.h>

// program to convert from seconds to hh:mm:ss format 

int main(){
    int seconds;
    int remainSeconds;
    int minutes;
    int hours;
    printf("Enter the second: ");
    scanf("%d",&seconds);
    hours = seconds / 3600;
    minutes = ( seconds % 3600 ) / 60;
    remainSeconds = ( seconds % 3600 ) % 60;
    printf("The %d seconds is ",seconds);
    if ( hours < 10 ){
        printf("0%d:",hours);
    }
    else {
        printf("%d:",hours);
    }

    if ( minutes < 10 ){
        printf("0%d:",minutes);
    }
    else{
        printf("%d:",minutes);
    }

    if ( hours < 10 ){
        printf("0%d\n", hours);
    }
    else{
        printf("%d\n", hours);
    }

    return 0;
}