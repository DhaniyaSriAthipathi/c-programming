#include<stdio.h>
int main()
{
    int i=0;
    int n;
    int data;
    int usage;
    int total=0;
    int count=0;
    scanf("%d %d",&n,&data);
    while(i<n)
    {
        scanf("%d",&usage);
        total+=usage;
        count++;
        if(total>=n)
        break;
        i++;
    }
    printf("%d\n",count);
    printf("%d",total-n);

    return 0;
}