#include<stdio.h>
int main()
{
    int delayDays;
    int fine;
    scanf("%d %d",&delayDays,&fine);//electricity late fine
    switch(delayDays)
    {
        case 1:
        if(fine<=5)
        printf("%d",fine*50);
        else if(fine<=10)
        printf("%d",fine*100);
        else if(fine>10)
        printf("%d",fine*200);
        else
        printf("invalid");
        break;
    }
    return 0;
}