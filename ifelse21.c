#include<stdio.h>
int main()
{
    int a,b;
    char s;
    scanf(" %c %d %d",&s,&a,&b);
    switch(s)
    {
        case 1 : printf("%d",a+b);
        break;
        default : printf("invalid");
        break;

    }
    return 0;
}