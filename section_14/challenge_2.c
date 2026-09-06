#include<stdio.h>

// check the number is double-digits or triple-digits 

int main(){
    int digits;
    printf("Enter the digits: ");
    scanf("%d",&digits);
    if ( digits > 9 && digits < 100){
        printf("double-digit\n");
    }
    else if ( digits > 99 && digits < 1000){
        printf("triple-digit\n");
    }
    else{
        printf("neither double/triple.\n");
    }
    return 0;
}