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
    int min=-1;
    for(int j=0;j<size;j++)
    {
        if(arr[j]>0)
        {
            if(min==-1||arr[j]<min)
            {
                min=arr[j];
            }
        }
    }
    printf("%d",min);
    return 0;
}
