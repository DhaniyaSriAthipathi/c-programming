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
    int a=0;
    int b=0;
    for(int i=0;i<r;i++)
    {
        int count=0;
        for(int j=0;j<c;j++)
        {
            int repeat=0;
        for(int k=0;k<j;k++)
        {
            if(arr[i][j]==arr[i][k]){
            repeat=1;
            break;}}
            if(repeat==0){
            count++;}}
            if(count>b){
            b=count;
            a=i;

        }
        }
         printf("%d",a);
         return 0;
    }