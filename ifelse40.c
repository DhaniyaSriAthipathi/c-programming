#include<stdio.h>
int main()
{
    int marks,income;
    scanf("%d %d",&marks,&income);
    if(marks>=85 && income<300000)
    printf("Eligible");
    else
    printf("not eligible");

    return 0;
}