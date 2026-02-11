#include<stdio.h>
int main()
{
    int warrantyCategory;
    int a;
    scanf("%d %d",&warrantyCategory,&a);
    switch(warrantyCategory)
    {
        case 1:if(a<=1)
        printf("Under Warrantly");
        break;
        case 2:if(a<=2)
        printf("Limited Warrantly");
        break;
        case 3:if(a>2)
        printf("Out of warranty");
        break;
        default:printf("invalid");
        break;
    }
    return 0;
}