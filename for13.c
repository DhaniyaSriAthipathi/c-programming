#include<stdio.h>
int main()
{
    int m,n;
    int sum=0;
    int i;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i+=m)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}