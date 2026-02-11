#include<stdio.h>
int main()
{
    int category;
    scanf("%d",&category);//exam fee calculation
    switch(category)
    {
        case 1:printf("₹1200");//general
        break;
        case 2:printf("₹800");//OBC
        break;
        case 3:printf("₹500");//SC/ST
        break;
        default:printf("invalid");
        break;

    }
    return 0;
}