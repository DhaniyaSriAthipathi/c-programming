#include<Stdio.h>
void value(int n)
{
    int factor=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            factor++;
        }
    }
    if(factor==1)
    printf("prime");
    else
    printf("not prime");
}
int main()
{
    int n;
    scanf("%d",&n);
    value(n);
    return 0;
}