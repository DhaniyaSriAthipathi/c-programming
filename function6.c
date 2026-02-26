#include<stdio.h>
void value(int n)
{
   int fact=1;
   for(int i=1;i<=n;i++)
   {
    fact=fact*i;
   } 
   printf("%d",fact);
}
int main()
{
    int n;
    scanf("%d",&n);
    value(n);
    return 0;
}