#include<Stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int count=0;
    int total=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++)
    {
        if(arr[j]%2==0)
        count++;
        else
        total++;
    }
    printf("Even : %d\n",count);
    printf("Odd : %d",total);
    return 0;
}
