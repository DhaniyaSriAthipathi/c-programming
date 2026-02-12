#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    int total=0;
    int overspend=0;
    for(i=0;i<n;i++)
    {
        int expense;
        scanf("%d",&expense);
        total+=expense;
        if(expense>1000)
        overspend++;

    }
    printf("%d\n",total);
    printf("%d",overspend);
    return 0;
}