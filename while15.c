#include<stdio.h>
int main()
{
    int i=0;
    int n;
    int overtime;
    int count=0;
    int total=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&overtime);
        total+=overtime;
        if(overtime>4)
        count++;
        i++;
    }
    printf("Total overtime : %d\n",total);
    printf("Burnout Days : %d",count);
    return 0;
}