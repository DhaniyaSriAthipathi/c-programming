#include<stdio.h>
int main()
{
    int n;
    int total=0;
    int count =0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int revenue;
        scanf("%d",&revenue);
        total+=revenue;
        if(revenue>50000)
        count++;
    }
    printf("Total Revenue : %d\n",total);
    printf("Target Days : %d",count);
    return 0;
}