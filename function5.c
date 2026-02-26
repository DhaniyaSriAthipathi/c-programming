#include<stdio.h>
void value(int n)
{
    int sum=0;
    int digit;
    while(n>0)
    {
        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    printf("%d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    value(n);
    return 0;
}