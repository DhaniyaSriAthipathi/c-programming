#include<stdio.h>
int main()
{
    int role;
    int login;
    scanf("%d %d",&role,&login);//system access control
    switch(role)
    {
        case 1:if(login>=0)
        printf("Full access");
        break;
        case 2:
        if(login>=0 && login<=20)
        printf("Limited access");
        else
        printf("Access Denied");
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}