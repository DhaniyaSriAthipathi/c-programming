#include<stdio.h>
int main()
{
    char ch='A';
    for(int i=5;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
    return 0;
}