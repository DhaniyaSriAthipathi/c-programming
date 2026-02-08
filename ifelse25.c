#include<stdio.h>
int main()
{
    int a,b;
    int s;
    scanf(" %d %d %d",&s,&a,&b);
    switch(s)
    {
        case 1 : printf("%d",a+b);
        break;
        default : printf("invalid");
        break;

    }
    return 0;
}