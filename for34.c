#include<stdio.h>
int main()
{
    int n;
    int count=0;
    int min;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int voltage;
        scanf("%d",&voltage);
        if(i==1)
        {
            min=voltage;

        }
        if(voltage<min)
        min=voltage;
        
        if(voltage<210)
        count++;

    }
    printf("Minimum Voltage : %d\n",min);
    printf("Low Voltage Events : %d",count);
    return 0;
}