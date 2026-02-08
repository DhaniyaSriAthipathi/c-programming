#include<stdio.h>
int main()
{
    int tickets;
    scanf("%d",&tickets);
    if(tickets>0)
    printf("confirmed");
    else
    printf("Waiting List");
    return 0;
}