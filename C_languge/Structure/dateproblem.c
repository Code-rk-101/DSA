#include<stdio.h>
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a;
    date b;
    
    printf("Enter the day :");
    scanf("%d",&a.day);
    printf("Enter the month :");
    scanf("%d",&a.month);
    printf("Enter the year :");
    scanf("%d",&a.year);
    
    printf("Enter the day :");
    scanf("%d",&b.day);
    printf("Enter the month :");
    scanf("%d",&b.month);
    printf("Enter the year :");
    scanf("%d",&b.year);
    
    int check = 0;
    if(a.day == b.day){
        check++;
    }    
    if(a.month == b.month){
        check++;
    } 
    if(a.year == b.year){
        check++;
    }
    if(check==3)
    printf("Dates are same");
    else
    printf("Dates are different");
    
    return 0;
}