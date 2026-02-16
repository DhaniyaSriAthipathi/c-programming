#include<stdio.h>
int main()
{
    int i=0;
    int n;
    int atm;
    int amount;
    int count=0;
    scanf("%d %d",&n,&atm);
    while(i<n)
    {
        scanf("%d",&amount);
        if(n>=amount){
        n=n-amount;
        count++;}
        else
        break;
        i++;
    }
    printf("%d\n",count);
    printf("%d",n);
    return 0;
}
