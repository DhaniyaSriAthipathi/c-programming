#include<stdio.h>
int main()
{
    int login;
    scanf("%d",&login);
    if(login<=3)
    printf("login allowed");
    else
    printf("account locked");
    return 0;
}