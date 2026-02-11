#include<stdio.h>
int main()
{
    int hours;
    int parking;
    int vehicleType;
    scanf("%d %d %d",&vehicleType,&parking,&hours);
    switch(vehicleType)
    {
        case 1:
        if(parking==10)
        printf("%d",hours*parking);
        break;
        case 2:
        if(parking==20)
        printf("%d",hours*parking);
        break;
        default :if(parking==20)
        printf("%d",parking*hours);
        break;
    }
    return 0;
}