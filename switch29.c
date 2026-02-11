#include<stdio.h>
int main()
{
    int vehicleType;
    int distance;
    scanf("%d %d",&vehicleType,&distance);//taxi fare
    switch(vehicleType)
    {
        case 1:printf("₹ %d",distance*10);//mini
        break;
        case 2:printf("₹ %d",distance*15);//sedan
        break;
        case 3:printf("₹ %d",distance*20);//suv
        break;
        default:printf("invalid");
        break;

    }
    return 0;
}