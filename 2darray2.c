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
     int sum=arr[0][0]*arr[1][0];
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            for(int k=0;k<r;k++)
            {
                for(int l=0;l<c;l++)
                {
                    int max=arr[i][j]*arr[k][l];
                    if(max>sum)
                    sum=max;
                }
            }

        }
    }
    printf("%d",sum);
    return 0;

}