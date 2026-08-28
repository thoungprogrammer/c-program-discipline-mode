#include<stdio.h>

// PRINT ON THE SCREEN THE RESULT OF 5 MATHEMATICAL OPERATIONS:
// [*] ADDITION(+)
// [*] SUBSTRACTION(-)
// [*] MULTIPLICATION(*)
// [*] DIVISION(/)
// [*] REMAINDER(%)

int main(){
    printf("Addition(+): %d + %d = %d\n",5,3,5+3);
    printf("Substraction(-): %d - %d = %d\n",5,3,5-3);
    printf("Multiplication(*): %d * %d = %d\n",5,3,5*3);
    printf("Division(/): %d / %d = %.2f\n",5,3,5/3.0);
    printf("Remainder(%%): %d %% %d = %d\n",5,3,5%3);
    return 0;
}

