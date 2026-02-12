#include<stdio.h>
int main()
{
    int salary;
    int absentDays;
    scanf("%d %d",&salary,&absentDays);
    for(int i=1;i<=absentDays;i++)
    {
        salary=salary-100;


    }
    printf("%d",salary);
    return 0;
}