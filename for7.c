#include<stdio.h>
int main()
{
    int n;
    int i;
    int sum=0;
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        sum=i+sum;
    }
    printf("%d",sum);
    return 0;
}