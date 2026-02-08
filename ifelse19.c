#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>'0' && a<'9')
    printf("digit");
    else
    printf("not an digit");
    return 0;
}