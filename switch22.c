#include<stdio.h>
int main()
{
    int connectionType;
    int units;
    scanf("%d %d",&connectionType,&units);//water bill calculation
    switch(connectionType)//domestic /commerical
    {
        case 1:
        if(units<=30)
        printf("%d",5*units);
        else
        printf("%d",8*units);
        break;
        case 2:
        if(units>=0)
        printf("%d",10*units);
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}