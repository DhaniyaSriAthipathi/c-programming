#include<Stdio.h>
void natural(int arr[],int size)
{
    int *p=arr;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=*(p+i);
    }
    printf("%d",sum);
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    natural(arr,size);

    return 0;
}