#include<stdio.h>
int main()
{
    int i=0;
    int n;
    int delay;
    int count=0;
    int total=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&delay);
        total+=delay;
        if(delay>2){
        count++;}
        i++;
    }
    printf("%d\n",total);
    printf("%d",count);
    return 0;
}