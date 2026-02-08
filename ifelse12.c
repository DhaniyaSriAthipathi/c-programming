#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks<=100 && marks>90)
    printf("grade A");
    else if(marks<90 && marks>=75)
    printf("grade B");
    else if(marks<75 && marks>=50)
    printf("grade C");
    else
    printf("Fail");
    return 0;
}