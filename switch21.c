#include<stdio.h>
int main()
{
    int seatType;
    int showTime;
    scanf("%d %d",&showTime,&seatType);//movie ticket
    switch(showTime)//silver/gold
    {
        case 1:
        if(seatType>=18)
        printf("Ticket Price ₹200");
        else
        printf("Ticket Price 150");
        break;
        case 2:
        if(seatType>=0)
        printf("Ticket Price ₹250");
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}