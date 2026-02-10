#include<stdio.h>
int main()
{
    int n;
    int rev=0;
    int rem;
    scanf("%d",&n);
    for(;n!=0;n/=10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    return 0;

}