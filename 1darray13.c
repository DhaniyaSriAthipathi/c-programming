#include<Stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    int avg=0;
    int count=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++)
    {
        sum+=arr[j];
        avg=sum/size;
    }
    for(int k=0;k<size;k++)
    {
        if(arr[k]>avg)
        count++;
    }
    printf("%d",count);
    return 0;
}