#include<stdio.h>

// PRACTICE SWAP IN C  

int main(){
    int boxA;
    int boxB;
    int tempBox;
    printf("Enter the value for the box A: ");
    scanf("%d",&boxA);
    printf("Enter the value for the box B: ");
    scanf("%d",&boxB);
    printf("--- Before swap --- \n");
    printf("box A = %d\n", boxA);
    printf("box B = %d\n", boxB);
    tempBox = boxA;
    boxA = boxB;
    boxB = tempBox;
    printf("--- After swap --- \n");   
    printf("box A = %d\n", boxA);
    printf("box B = %d\n", boxB);
    return 0;
}