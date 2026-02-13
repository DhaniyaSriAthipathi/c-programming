#include<stdio.h>
int main()
{
    int i=0;
    int n;
    int successful;
    int count=0;
    int max=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&successful);
        if(successful==1)
        {
            count++;
        }
        if(successful==0)
        max++;
        i++;
    }
    printf("Successfully %d\n",count);
    printf("Cancelled %d\n",max);
    if(count==max)
        {
            printf("safe");
        }
        else
        printf("risk");
    return 0;
}