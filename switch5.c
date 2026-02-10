#include<stdio.h>
int main()
{
    int planType,paymentMode,c;
    scanf("%d %d",&planType,&paymentMode);
    if(planType==1)
    c=199;
    else
    c=399;
    if(paymentMode==11||paymentMode==12)
    c=c-20;
    else
    c=c;
    printf("%d",c);
    return 0;

}