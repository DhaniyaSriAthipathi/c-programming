#include<stdio.h>
int main()
{
    int capacity;
    int n;
    int admission;
    int i =0;
    int count=0;
    int total=0;
    scanf("%d %d",&capacity,&n);
    while(i<n)
    {
        scanf("%d",&admission);
        total+=admission;
        if(total>90)
        count++;
        i++;

    }
    printf("%d\n",total);
    printf("%d",count);
    return 0;
}