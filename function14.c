#include<stdio.h>
void perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%1==0)
        sum+=i;
    }
    if(n==sum){
        printf("perfect");}
        else
        printf("not perfect no");
}
int main()
{
    int n;
    scanf("%d",&n);
    perfect(n);
    return 0;
}