#include<stdio.h>
int main()
{
    int n;
    int total=0;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int loss;
        scanf("%d",&loss);
        total+=loss;
        if(loss>100)
        count++;
    }
    printf("Total loss : %d\n",total);
    printf("High Loss Days : %d\n",count);
    return 0;
}