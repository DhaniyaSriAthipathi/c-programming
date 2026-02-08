#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18 && age <=100)
    printf("Your eligible for voting");
    else
    printf("not eligible");
    return 0;
}