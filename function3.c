#include<stdio.h>
void number(int n)
{
    if(n%2==0)
    {
        printf("even");
    }
    else
    printf("odd");
}
int main()
{
    int n;
    scanf("%d",&n);
    number(n);
    return 0;
}