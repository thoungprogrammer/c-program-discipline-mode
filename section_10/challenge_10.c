#include<stdio.h>
#include<math.h>
// program that receive number and print x^2,x^4,x^6,x^8

int main(){
	double number;
	printf("Enter the a number: ");
	scanf("%lf",&number);
	printf("The number %.2lf^2 is %.2lf\n",number,pow(number,2));
    printf("The number %.2lf^4 is %.2lf\n",number,pow(number,4));
    printf("The number %.2lf^6 is %.2lf\n",number,pow(number,6));
    printf("The number %.2lf^8 is %.2lf\n",number,pow(number,8));
	return 0;
}
