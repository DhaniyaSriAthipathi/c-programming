#include<stdio.h>
void palindrome(int n)
{
    int rev=0;
    int rem;
    int org=n;
    for(;n!=0;n/=10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    if(org==rev)
    printf("palindrome");
    else
    printf("not palindrome");

}
int main()
{
    int n;
    scanf("%d",&n);
    palindrome(n);
    return 0;
}