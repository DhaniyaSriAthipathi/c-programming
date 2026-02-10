#include<stdio.h>
int main()
{
    int online;
    char offline;
    scanf("%d %c",&online,&offline);
    switch(online)
    {
        case 1:
        if(online=='R')
        printf("5000");
        else
        printf("3000");
        break;
        case 2:
        if(online=='R')
        printf("₹9000");
        else
        printf("₹7000");
        break;
        default:printf("invalid");
    }
    return 0;
}