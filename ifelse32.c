#include<stdio.h>
int main()
{
    int length;
    scanf("%d",&length);
    if(length>8)
    printf("Strong password");
    else if(length<8)
    printf("Weak password");
    else if(length==8)
    printf("Strong passwords");
    else
    printf("invalid");

    return 0;
}