#include<stdio.h>
int main()
{
    int vehicleType;
    float trips;
    scanf("%d %f",&vehicleType,&trips);
    switch(vehicleType)
    {
        case 1:
        if(trips==1)
        printf("₹100");
        else if(trips>2 && trips<10)
        printf("₹800");
        else
        printf("₹800");
        break;
        case 2:
        if(trips==1)
        printf("₹240");
        else if(trips>2 && trips<10)
        {
        vehicleType=5*240;
        printf("%d",vehicleType);
        }
        else
        printf("2400");
        break;
        default :printf("invalid");
        break;
    }
    return 0;
}