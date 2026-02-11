#include<stdio.h>
int main()
{
    int customerType;
    float billAmount;
    float discount;
    scanf("%d %f",&customerType,&billAmount);//restaurant discount system
    switch(customerType)
    {
        case 1:
       discount=billAmount-(billAmount*5/100);//regular
        printf("%f",discount);
        break;
        case 2:
       discount=billAmount-(billAmount*15/100);//premium
        printf("%f",discount);
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}