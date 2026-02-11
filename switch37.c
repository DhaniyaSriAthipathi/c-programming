#include<stdio.h>
int main()
{
    int courseType;
    scanf("%d",&courseType);
    switch(courseType)
    {
        case 1:printf("Certificate Fee ₹0");//free course
        break;
        case 2:printf("Certificate Fee ₹500");//paid course
        break;
        default :printf("invalid");
        break;
    }
    return 0;
}