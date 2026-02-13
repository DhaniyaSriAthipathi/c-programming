#include<Stdio.h>
int main()
{
    int i=0;
    int n;
    int risk;
    int count=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&risk);
        if(risk==0){
        count++;}
        i++;
    }
    printf("%d\n",count);
    if(count>=0){
    printf("high");}
    else 
    printf("low");

    return 0;
}