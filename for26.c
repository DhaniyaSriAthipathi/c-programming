#include<stdio.h>
int main()
{
    int n;
    int total=0;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int raindays;
        scanf("%d",&raindays);
        total+=raindays;
        if(raindays>50)
        count++;
    }
    printf("Total Rainfall : %d \n ",total);
    printf("Heavy Rain Days : %d",count);
    return 0;
}