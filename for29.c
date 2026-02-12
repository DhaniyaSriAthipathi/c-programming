#include<stdio.h>
int main()
{
    int n;
    int total=0;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int data;
        scanf("%d",&data);
        total+=data;
        if(data>2)
        count++;
    }
    printf("Total Data : %d\n",total);
    printf("High Usage Days : %d",count);
    return 0;
}