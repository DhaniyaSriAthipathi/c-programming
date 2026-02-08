#include<stdio.h>
int main()
{
    int a;
    int bills;
    scanf("%d",&a);
    if(a>0){
        bills=a*5;
        printf("%d",bills);
    }
    else
    printf("not bills");
    
    return 0;
}