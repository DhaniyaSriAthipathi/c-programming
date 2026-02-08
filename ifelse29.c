#include<stdio.h>
int main()
{
    int speed;
    scanf("%d",&speed);
    if(speed>80)
    printf("speed limit exceeded");
    else
    printf("within spped limit");

    return 0;
}