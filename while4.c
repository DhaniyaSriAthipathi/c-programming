#include<stdio.h>
int main()
{
    int n;
    int work;
    int i=0;
    int count=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&work);
        if(work==0)
        count++;
        else
        count=0;
        i++;
    }
    printf("%d",count);
    return 0;
}