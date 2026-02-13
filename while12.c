#include<stdio.h>
int main()
{
    int i=0;
    int n;
    int power;
    int max=0;
    int count=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&power);
        if(power>max)
        max=power;
        if(power>5)
        count++;
        i++;

    }
    printf("%d\n",max);
    printf("%d",count);

    return 0;
}