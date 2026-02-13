#include<stdio.h>
int main()
{
    int i=0;
    int n;
    int month;
    int count=0;
    int max=0;
    scanf("%d %d",&n,&month);
    while(i<n)
    {
        if(month==0){
        count++;}
        if(count>max){
        max=count;}
        else{
        count=0;}
        i++;
    }
    printf("%d",max);
    return 0;
}