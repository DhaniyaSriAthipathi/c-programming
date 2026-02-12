#include<stdio.h>
int main()
{
    int battery;
    int n;
    scanf("%d %d",&battery,&n);
    for(int i=1;i<=n;i++)
    {
        int percent;
        scanf("%d",&percent);
        battery-=percent;
    }
    printf("%d",battery);
    return 0;
}