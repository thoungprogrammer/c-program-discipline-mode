#include<stdio.h>

// PROGRAM THAT RECEIVES AN INTEGER REPRESENT SECOND AND CONVERT IT TO FORMAT HH:MM:SS

int main(){

    int second;
    int remainSecond;
    int minute;
    int hour;

    printf("Enter the integer represent minute: ");
    scanf("%d", &second);
    hour = second/3600;
    minute = (second%3600)/60;
    remainSecond = (second%3600)%60; 
    printf("The %d second in HH:MM:SS format is %02d:%02d:%02d\n",minute,hour,minute,remainSecond);
    return 0;
}