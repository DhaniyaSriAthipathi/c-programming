#include<stdio.h>
int main()
{
    int water;
    scanf("%d",&water); 
    if(water>90)
    printf("Overflow Warning");
    else
    printf("safe level");
    return 0;
}