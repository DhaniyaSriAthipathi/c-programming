#include<stdio.h>
int count=1;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}