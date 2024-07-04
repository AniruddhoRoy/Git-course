#include<stdio.h>
int main()
{
    int year;
    printf("enter a year =");
    scanf("%d",&year);

    if(year%400==0){
        printf("year %d is leap year",year);
    }
    else if(year%4==0 && year%100 != 0){
        printf("year %d is leap year",year);
    }
    else{
        printf("year %d is not leap year",year);
    }

    getch();

}
