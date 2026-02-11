#include<Stdio.h>
int main()
{
    int distanceCategory;
    int a;
    scanf("%d %d",&distanceCategory,&a);
    switch(distanceCategory)
    {
        case 1:if(a<=5)
        printf("₹800");
        break;
        case 2:if(a>=6 && a<10)
        printf("₹1200");
        break;
        case 3:if(a>10)
        printf("₹1800");
        break;
        default :printf("invalid");
        break;
    }
    return 0;
}