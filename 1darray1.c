#include<stdio.h>
int main()
{
    //Second Highest Salary in a team
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int second=arr[0];
    for(int j=0;j<size;j++)
    {
        if(arr[j]>largest)
        largest=arr[j];
    }
    for(int k=0;k<size;k++)
    {
        if(arr[k]>second && arr[k]<largest)
        second=arr[k];
    }
    printf("%d",second);
    return 0;
}