#include<stdio.h>
int main()
{
    int i=0;
    int count=0;
    int n;
    int max=0;
    int noise=0;
    int value;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&value);
        if(value>70)
        {
            count++;
            noise++;
        
        if(count>max)
        max=count;
        }
        else{
        count=0;}
        i++;
       
    }
    printf("%d",count);
    printf("%d",i);
    return 0;
}