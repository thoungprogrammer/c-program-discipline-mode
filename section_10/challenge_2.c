#include<stdio.h>

// PROGRAM THAT CALCULATE AND PRINT SUM OF THE SEQUENCE 
// FORMULA: SN = (A1+AN)*N/2
int main(){
    int a1;
    int an;
    int n;
    int sn;
    printf("Enter the first term (a1): ");
    scanf("%d",&a1);
    printf("Enter the n-th term (an): ");
    scanf("%d",&an);
    printf("Enter the number/index (n): ");
    scanf("%d",&n);
    printf("The sum of the sequence is (sn): %d\n",sn);
    return 0;
}