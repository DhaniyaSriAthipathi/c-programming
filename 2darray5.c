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
    int min=0;
    int max=0;
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            max+=arr[0][j];
        }
        for(int k=0;k<c;k++)
        {
            sum+=arr[i][k];
            if(sum<max){
                max=sum;
                min=i;
            }

        }
    }
    printf("%d",min);
    return 0;
}