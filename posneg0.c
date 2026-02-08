#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    (n>0)?printf("Positive"):0;
    (n<0)?printf("Negative"):printf("ZERO");
    return 0;
}