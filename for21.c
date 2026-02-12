#include<stdio.h>
int main()
{
    int n;
    int i;
    int total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int withdraw;
        scanf("%d",&withdraw);
        if(withdraw>1000){
        total=1;}
    }
    if(total==1)
    printf("Approved");
    else
    printf("limit exceed");
    return 0;
}