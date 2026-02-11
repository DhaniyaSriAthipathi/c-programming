#include<stdio.h>
int main()
{
    int violationType;
    scanf("%d",&violationType);
    switch(violationType)
    {
        case 1:printf("Fine ₹1000");//No helmet
        break;
        case 2:printf("Fine ₹1500");//Singaljump
        break;
        case 3:printf("Fine ₹2000");//Over speeding
        break;
    }
    return 0;
}