#include<stdio.h>
int main()
{
    int marks;
    int attempt;
    scanf("%d %d",&attempt,&marks);
    switch(attempt)
    {
        case 1:
        if(marks>=80)
        printf("Excellent");
        else
        printf("Not qualified");
        break;
        case 2:
        if(marks>=60)
        printf("Good");
        else
        printf("Not Qualified");
        break;
        default:printf("Needs Improvement");
        break;
    }
    return 0;
}