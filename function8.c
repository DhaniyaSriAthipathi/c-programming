#include<stdio.h>
void value(int n)
{
    int rev=0;
    int rem;
    for(;n!=0;n/=10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);

}
int main()
{
    int n;
    scanf("%d",&n);
    value(n);
    return 0;
}