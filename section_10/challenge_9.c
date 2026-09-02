#include<stdio.h>
#include<math.h>
// program to find the distance between 2 point 

int main(){
    double x1,y1;
    double x2,y2;
    double distance;
    printf("Enter the first point (x1, y1):\n> ");
    scanf("%lf", &x1);
    printf("> ");
    scanf("%lf", &y1);
    printf("Enter the second point (x2, y2):\n> ");
    scanf("%lf", &x2);
    printf("> ");
    scanf("%lf", &y2);
    distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("The distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is %.2lf\n",x1,y1,x2,y2,distance);



    return 0;
}