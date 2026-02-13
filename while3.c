#include<stdio.h>
int main()
{
    int n;
    int total;
    int data;
    int i=0;
    int count=0;
    scanf("%d %d",&total,&n);
    while(i<n)
    {
        scanf("%d",&data);
        total-=data;
        if(total<0)
        {
            total=0;
            break;
        }
         count++;
        i++;
    }
    printf("%d \n",count);
    printf("%d",total);
    return 0;
}