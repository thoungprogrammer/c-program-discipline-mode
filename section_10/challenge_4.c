#include<stdio.h>

// PROGRAM TO CALCULATE AND PRINT VEHICLE TRAVEL TIME

int main(){
    double distance;
    double speed;
    double time;
    
    printf("Enter the distance (in km): ");
    scanf("%lf", &distance);
    printf("Enter the speed ( in kh/h): ");
    scanf("%lf", &speed);
    time = distance/speed;
    printf("The time that it take to drive is %.2lfh\n", time);
    return 0;
}