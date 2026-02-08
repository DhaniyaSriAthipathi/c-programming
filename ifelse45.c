#include<stdio.h>
int main()
{
    int ac;
    scanf("%d",&ac);
    if(ac<25)
    printf("Heating Mode");
    else if(ac<=35)
    printf("Normal mode");
    else
    printf("Cooling mode");
    return 0;
}

