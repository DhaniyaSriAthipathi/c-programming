#include<stdio.h>
int main()
{
    char ch='A';
    for(int i=0;i<5;i++)
    {
        for(int j=4-i;j<=4;j++)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
    return 0;
}