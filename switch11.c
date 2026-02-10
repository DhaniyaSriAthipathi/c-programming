#include<stdio.h>
int main()
{
    int planType;
    float dataUsed;
    scanf("%d %f",&planType,&dataUsed);
    switch(planType)
    {
        case 1:
        if(dataUsed<=1)
        printf("normal speed");
        else
        printf("speed reduced");
        break;
        case 2:
        if(dataUsed<=2)
        printf("normal speed");
        else
        printf("extra charges applied");
        break;
        default:printf("invalid");
        break;

    }
    return 0;
}