#include<stdio.h>
int main()
{
    int planType;
    scanf("%d",&planType);//Internet spped plan
    switch(planType)
    {
        case 1:printf("Speed 40 Mbps");//basic
        break;
        case 2:printf("Speed 100 Mbps");//standard
        break;
        case 3:printf("Speed 300 Mbps");//premium
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}