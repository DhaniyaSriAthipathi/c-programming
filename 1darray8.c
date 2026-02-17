#include<stdio.h>
int main()
{
    //left rotate
    int size;
    scanf("%d",&size);
    int arr[size];
    int temp;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int j=0;j<k;j++)
    {
        temp=arr[0];
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
         arr[size-1]=temp;
    }
    for(int i=0;i<size;i++){
    printf("%d",arr[i]);}
    return 0;
}