#include<stdio.h>

// program to find and print the next day on the calender

int main(){
    int day;
    int month;
    int year;
    int nextDay;
    int nextMonth;
    int nextYear;
    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);
    if ( year % 400 == 0 ){
        // LEAP YEAR;
        if( month == 1 ){
            if ( day > 0 && day < 31 ){
                nextDay = day + 1;
                nextMonth = month;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d\n .", day,month,year,nextDay,nextMonth,nextYear);
            }
            else if ( day == 31){
                nextDay = 1;
                nextMonth = month + 1 ;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d .\n", day,month,year,nextDay,nextMonth,nextYear);
            }
            else{
                printf("The day %d not exist in January .\n", day);
            }
            
        }
        else if( month == 2 ){
            if ( day > 0 && day < 29 ){
                nextDay = day + 1;
                nextMonth = month;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d\n .", day,month,year,nextDay,nextMonth,nextYear);
            }
            else if ( day == 29){
                nextDay = 1;
                nextMonth = month + 1 ;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d .\n", day,month,year,nextDay,nextMonth,nextYear);
            }
            else{
                printf("The day %d not exist in February .\n", day);
            }
        }
        else if( month == 3 ){
            if ( day > 0 && day < 31 ){
                nextDay = day + 1;
                nextMonth = month;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d\n .", day,month,year,nextDay,nextMonth,nextYear);
            }
            else if ( day == 31){
                nextDay = 1;
                nextMonth = month + 1 ;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d .\n", day,month,year,nextDay,nextMonth,nextYear);
            }
            else{
                printf("The day %d not exist in March.\n", day);
            }
        }
        else if( month == 4 ){
            if ( day > 0 && day < 30 ){
                nextDay = day + 1;
                nextMonth = month;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d\n .", day,month,year,nextDay,nextMonth,nextYear);
            }
            else if ( day == 30){
                nextDay = 1;
                nextMonth = month + 1 ;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d .\n", day,month,year,nextDay,nextMonth,nextYear);
            }
            else{
                printf("The day %d not exist in April .\n", day);
            }
        }
        else if( month == 5 ){
            if ( day > 0 && day < 31 ){
                nextDay = day + 1;
                nextMonth = month;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d\n .", day,month,year,nextDay,nextMonth,nextYear);
            }
            else if ( day == 31){
                nextDay = 1;
                nextMonth = month + 1 ;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d .\n", day,month,year,nextDay,nextMonth,nextYear);
            }
            else{
                printf("The day %d not exist in May .\n", day);
            }
        }
        else if( month == 6 ){
            if ( day > 0 && day < 30 ){
                nextDay = day + 1;
                nextMonth = month;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d\n .", day,month,year,nextDay,nextMonth,nextYear);
            }
            else if ( day == 30){
                nextDay = 1;
                nextMonth = month + 1 ;
                nextYear = year;
                printf("The next day of %d/%d/%d is %d/%d/%d .\n", day,month,year,nextDay,nextMonth,nextYear);
            }
            else{
                printf("The day %d not exist in June .\n", day);
            }
        }
    // }
    // else if ( year % 100 == 0 ){
    //     // NOT LEAP YEAR;
    // }
    // else if ( year % 4 == 0 ){
    //     // LEAP YEAR;
    // }
    // else{
    //     // NOT LEAP YEAR;
    }
    return 0;
}