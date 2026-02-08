#include<stdio.h>
int main()
{
    int balance;
    scanf("%d",&balance);
    if(balance>=1000)
    printf("Sufficient balance");
    else
    printf("Low  balance");
    return 0;
}