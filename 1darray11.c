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
    int total=0;
    for(int j=0;j<size;j++)
    {
        total+=arr[j];
    }
    int left=0;
    for(int k=0;k<size;k++)
    {
        int right=total-left-arr[k];
        
    if(left==right){
    printf("%d",k);
    return 0;
}
left+=arr[k];
    }
return 0;
}