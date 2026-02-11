#include<stdio.h>
int main()
{
    int deliveryMode;
    scanf("%d",&deliveryMode);//online shopping
    switch(deliveryMode)
    {
        case 1:printf("₹40");//standard
        break;
        case 2:printf("₹120");//same day
        break;
        case 3:printf("Free");//pickup
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}