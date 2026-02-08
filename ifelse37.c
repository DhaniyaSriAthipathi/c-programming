#include<stdio.h>
int main()
{
    int ticket;
    scanf("%d",&ticket);
    if(ticket<12)
    printf("Discount Ticket");
    else
    printf("Regular ticket");
    return 0;
}