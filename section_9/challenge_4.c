#include<stdio.h>

// CONVERT TEMPERATURE FROM CELSIUS DEGREES TO FAHRENHEIT DEGREES

int main(){ 
    double celTemp;
    double fahTemp;
    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celTemp);
    fahTemp = celTemp * 1.8 + 32;
    printf("The temperature in fahrenheit is %.2lf\n",fahTemp);
    return 0;
}