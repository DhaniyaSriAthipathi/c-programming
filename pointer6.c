#include<Stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int *p;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    p=arr+size-1;
     for(int j=size-1;j>=0;j--)
    {
        printf("%d",arr[j]);
        p--;
    }
    return 0;
}

   