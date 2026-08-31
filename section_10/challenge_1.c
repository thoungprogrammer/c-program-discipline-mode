#include<stdio.h>

// PROGRAM THAT CALCULATE AND PRINT THE N-TH TERM OF THE SEQUENCE 
// FORMULA: AN = A1+(N-1)*D

int main(){
    int a1;
    int n;
    int d;
    int an;
    printf("Enter the first term (a1): ");
    scanf("%d",&a1);
    printf("Enter the term number/index (n): ");
    scanf("%d",&n);
    printf("Enter the common difference (d): ");
    scanf("%d",&d);
    an = a1+(n-1)*d;
    printf("The n-th term of the sequence is an = %d\n",an);
    return 0;
}