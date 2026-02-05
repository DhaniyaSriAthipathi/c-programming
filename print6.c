#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int c=a/b;
    printf("Quotient : %d",c);
    int d=a%b;
    printf("\n Remainder : %d",d);
    return 0;
}
