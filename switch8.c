#include<stdio.h>
int main()
{
    int marks;
    int attendance;
    scanf("%d %d",&marks,&attendance);
    switch(marks)
    {
        case 90:
        if(attendance<75)
        printf("fails");
        break;
        case 80:
        if(marks>=75)
        printf("distinction");
        break;
        case 70:
        if(marks<=50 && marks>=74)
        printf("pass");
        break;
        case 60:
        if(marks<50)
        printf("fail");
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}