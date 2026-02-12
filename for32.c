#include<stdio.h>
int main()
{
    int n;
    int total=0;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int error;
        scanf("%d",&error);
        total+=error;
        if(error>50)
        count++;

    }
    printf("Total Errors : %d\n",total);
    printf("Critical Hours : %d",count);
    return 0;
}