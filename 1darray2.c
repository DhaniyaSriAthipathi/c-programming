#include<stdio.h>
int main()
{
    //Count Students Scoring a Specific Mark
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);}
    int x;
    scanf("%d",&x);
    int count=0;
    for(int k=0;k<size;k++)
    {
        if(arr[k]==x)
        count++;
    }
    printf("%d",count);
    return 0;
}