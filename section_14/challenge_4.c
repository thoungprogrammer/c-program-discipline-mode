#include<stdio.h>

// program that receive a coordinate points in XY and print the quadrant 

int main(){
    double valueX;
    double valueY;

    printf("Enter the value X: ");
    scanf("%lf",&valueX);
    printf("Enter the value Y: ");
    scanf("%lf",&valueY);

    if ( valueX > 0 && valueY > 0){
        printf("(%.2lf,%.2lf) --> It is in Quadrant 1\n",valueX,valueY);
    }
    else if ( valueX < 0 && valueY > 0){
        printf("(%.2lf,%.2lf) --> It is in Quadrant 2\n",valueX,valueY);
    }
    else if ( valueX < 0 && valueY < 0){
        printf("(%.2lf,%.2lf) --> It is in Quadrant 3\n",valueX,valueY);
    }
    else{
        printf("(%.2lf,%.2lf) --> It is in Quadrant 4\n", valueX,valueY);
    }
    return 0;
}