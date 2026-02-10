#include<stdio.h>
int main()
{
    int n,p;
    int i;
    int r=1;
    
    scanf("%d %d",&n,&p);
    for(i=1;i<=p;i++)
    
    {
        r=r*n;
    }
    printf("%d",r);


}
    