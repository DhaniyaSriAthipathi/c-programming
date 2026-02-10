#include<stdio.h>
int main()
{
    int vehicleCategory;
    int age;
    scanf("%d %d",&vehicleCategory,&age);
    switch(vehicleCategory)
    {
        case 1:
        if(age<=5)
        printf(" Two wheeler ₹1500");
        else
        printf("Two Wheeler ₹2500");
        break;
        case 2:
        if(age<=5)
        printf("Four Wheeler ₹4000");
        else
        printf("Four Wheeler ₹6000");
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}