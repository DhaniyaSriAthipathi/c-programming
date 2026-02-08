#include<Stdio.h>
int main()
{
    int sign;
    scanf("%d",&sign);
    if(sign>0)
    printf("positive");
    else if(sign<0)
    printf("negative");
    else
    printf("Neutral");
    return 0;
}