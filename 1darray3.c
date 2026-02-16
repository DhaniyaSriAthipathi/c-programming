#include<stdio.h>
int main()
{
    //Verify sorted daily sales report
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ascending=1;
    for(int j=0;j<size-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            ascending=0;
            break;
        }
    }
    if(ascending==1)
    printf("yes");
    else
    printf("no");
    return 0;
}