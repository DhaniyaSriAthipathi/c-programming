#include<stdio.h>
int main()
{
    int n;
    int count=0;
    int max;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int fuel;
        scanf("%d",&fuel);
        if(i==1)
        {
            max=fuel;

        }
        if(fuel>max)
        max=fuel;
        
        if(fuel>50)
        count++;

    }
    printf("Total Errors : %d\n",max);
    printf("Critical Hours : %d",count);
    return 0;
}