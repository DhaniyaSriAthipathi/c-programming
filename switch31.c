#include<Stdio.h>
int main()
{
    int durationType;
    scanf("%d",&durationType);
    switch(durationType)
    {
        case 1:printf("Member Fee : 1500");//gym 1 month
        break;
        case 2:printf("Member Fee : 4000");//gym 3 month
        break;
        case 3:printf("Member Fee :7000");//gym 6 month
        break;
    }
    return 0;
}