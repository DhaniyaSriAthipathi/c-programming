#include<stdio.h>
int main()
{
    int accountType;
    int years;
    scanf("%d %d",&accountType,&years);
    switch(accountType)
    {
        case 1:printf("interst 4");
        break;
        case 2 :
        if(years<=3)
        printf("interst 5");
        else
        printf("interst 7");
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}