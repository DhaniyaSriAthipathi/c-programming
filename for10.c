#include<stdio.h>
int main()
{
    int n;
    int a=0;
    int b=1;
    int c;
    int i;
    scanf("%d",&n);
    for(i=1;1<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}