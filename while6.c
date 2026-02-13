#include<stdio.h>
int main()
{
    int maxweight;
    int n;
    int passenger;
    int count=0;
    int i=0;
    scanf("%d %d",&maxweight,&n);
    while(i<n)
    {
        scanf("%d",&passenger);
        if(maxweight-passenger>=0){
        maxweight-=passenger;
        count++;}
        else
        break;
        
        i++;
    }
    printf("Passengers Allowed :%d\n",count);
    if(maxweight>passenger)
    {
        printf("Overload : yes");
    }
    else
    printf("Overload : no");
    return 0;
}