#include<stdio.h>

// Just practice exercise

int main(){
    char choice;
    printf("Are you single: ");
    scanf("%c", &choice);
    if (choice == "y"){
        printf("YOu are single! Keep learning and find a good girl later.\n");
    }
    else if (choice == "n"){
        printf("Do your best to take care of here. Please don't hurt her feeling.\n");
    }
    else{
        printf("Fuck you! You wrong typo please do it again next time");
    }
    return 0;
}