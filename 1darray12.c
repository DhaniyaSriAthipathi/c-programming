#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);

    for(int j=0;j<size;j++)
    {
        for(int k=j+1;k<size;k++)
        {
            if(arr[j]+arr[k]==sum)
            printf("%d  %d",arr[j] ,arr[k]);
        }
    }
    return 0;
}