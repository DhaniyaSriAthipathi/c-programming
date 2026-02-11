#include<stdio.h>
int main()
{
    int roomType;
    scanf("%d",&roomType);//hostel fees
    switch(roomType)
    {
        case 1:printf("₹80000");//single
        break;
        case 2:printf("₹60000");//double
        break;
        case 3:printf("₹45000");//triple
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}