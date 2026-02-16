#include<Stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    int total;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(int j=0;j<size;j++)
    {
        total=(size*(size+1)/2);
    }
    printf("%d",sum-total);
    return 0;
}