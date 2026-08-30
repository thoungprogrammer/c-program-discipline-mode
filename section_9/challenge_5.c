#include<stdio.h>

// CONVERT FAHRENHEIT TO CELSIUS

int main(){
    double fahTemp;
    double celTemp;
    printf("Enter the fahrenheit temperature: ");
    scanf("%lf",&fahTemp);
    celTemp = (fahTemp - 32)/1.8;
    printf("The temperature in celsius is %.2lf\n",celTemp); 
    return 0;
}