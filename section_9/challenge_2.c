#include<stdio.h>

// PROGRAM TO CALCULATE AND PRINT THE AREA OF THE GIVEN RECTANGLE

int main(){
    float recHeight;
    float recWidth;
    float recArea;
    printf("Enter the width of rectangle \n> ");
    scanf("%f", &recWidth);
    printf("Enter the height of rectangle \n> ");
    scanf("%f", &recHeight);
    recArea = recHeight * recWidth;
    printf("The area of the rectangle is %.2f\n",recArea);
    return 0;
}