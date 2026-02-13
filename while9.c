#include<stdio.h>
int main()
{
    int i=0;
    int n;
    int fuel;
    int trip;
    int count=0;
    
    scanf("%d %d",&n,&fuel);
    while(i<n)
    {
        scanf("%d",&trip);
        if(n-trip>=0){
        n-=trip;
        count++;}
        else
        break;
        i++;
    }
    printf("%d\n",count);
    printf("%d",n);
    return 0;
}