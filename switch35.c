#include<stdio.h>
int main()
{
    int fuelType;
    int litres;
    scanf("%d %d",&fuelType,&litres);
    switch(fuelType)
    {
        case 1:printf("Fuel Cost :₹ %d",litres*105);//petrol
        break;
        case 2:printf("Fuel Cost :₹ %d",litres*92);//diesel
        break;
        case 3:printf("Fuel Cost :₹%d",litres*85);//CNG
        break;
    }
}