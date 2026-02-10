#include<stdio.h>
int main()
{
    int orderAmount;
    int speedTpye;
    scanf("%d %d",&orderAmount,&speedTpye);
    if(orderAmount==1)
    printf("50");
    else if(orderAmount==2)
    {
        if(orderAmount<1000)
    printf("Delivery ₹100");

    }
    else
    printf("free");
    return 0;
}