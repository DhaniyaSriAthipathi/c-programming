#include<stdio.h>
int main()
{
    int week;
    scanf("%d",&week);
    if(week>=1 && week<=5)
    printf("weekdays");
    else if(week >=6 && week <=7)
    printf("weekend");
    else
    printf("not in week");

    return 0;
}