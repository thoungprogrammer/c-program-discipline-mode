#include<stdio.h>
#include<math.h>

// Making intermediate calculator using switch case  
// NOTE: Compile with command --> gcc challenge_5.c -0 challenge_5 -lm 
int main(){
    char choice;
    double firstNum;
    double secondNum;
    printf("Enter the first number: ");
    scanf("%lf",&firstNum);
    printf("Enter the second number: ");
    scanf("%lf",&secondNum);
    printf("Please enter the operation ( '+','-','*','/','%%'): ");
    scanf(" %c",&choice);
    switch (choice)
    {
    case '+':
        printf("The addition between %.2lf and %.2lf is %.2lf\n",firstNum,secondNum,firstNum+secondNum);
        break;
    case '-':
        printf("The substraction between %.2lf and %.2lf is %.2lf\n",firstNum,secondNum,firstNum-secondNum);
        break;
    case '*':
        printf("The substraction between %.2lf and %.2lf is %.2lf\n",firstNum,secondNum,firstNum*secondNum);
        break;
    case '/':
        printf("The division between %.2lf and %.2lf is %.2lf\n",firstNum,secondNum,firstNum/secondNum);
        break;
    case '%':
        printf("The remainder between %.2lf and %.2lf is %.2lf\n",firstNum,secondNum,fmod(firstNum,secondNum));
        break;
    default:
        printf("Please choose (+) or (-) or (*) or (-) or (/) or (%%)\n");
        break;
    }
    return 0;
}

