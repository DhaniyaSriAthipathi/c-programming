#include<stdio.h>
int main()
{
    int classType;
    scanf("%d",&classType);
    switch(classType)
    {
        case 1:printf("Upgrade Fee ₹300");//sleeper
        break;
        case 2:printf("Upgrade Fee ₹800");//3AC
        break;
        case 3:printf("Upgrade Fee ₹1500");//2AC
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}
