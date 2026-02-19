#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    int product=0;
    for(int i=0;i<r;i++)
    {
        int sum=1;
        for(int j=0;j<c;j++)
        {
            sum*=arr[i][j];

        }
        if(i==0)
        {
            max=sum;
            product=i;
        }
        else if(sum>max)
        max=sum;
        product=i;
    }
    printf("%d",product);

    return 0;
}