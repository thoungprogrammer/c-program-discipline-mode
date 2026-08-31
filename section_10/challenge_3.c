#include<stdio.h>

// PROGRAM TO CALCULATE AND PRINT THE TOTAL MONTHLY SALARY OF THE EMPLOYEE

int main(){
    double salaryPerHour;
    double totalHourInMonth;
    double totalSalary;
    printf("Enter the salary per hours: $");
    scanf("%lf", &salaryPerHour);
    printf("Enter the total hour of work in month: ");
    scanf("%lf",&totalHourInMonth);
    totalSalary = salaryPerHour * totalHourInMonth;
    printf("The salary in this month is %.2lf\n",totalSalary);
    
    return 0;
}