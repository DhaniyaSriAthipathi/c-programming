#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++)
    {
        int k;
        for(k=j+1;k<size;k++)
        {
            if(arr[k]>=arr[j])
            break;
        }
        if(k==size)
        printf("%d",arr[j]);
    }
    return 0;
}