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
    int min;
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
        if(i==0)
        {
            max=sum;
            min=sum;
        }
        else{
            if(sum>max)
            max=sum;
            if(sum<min)
            min=sum;
        }}
    printf("%d",max-min);
    return 0;
}