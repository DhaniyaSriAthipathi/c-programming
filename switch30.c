#include<stdio.h>
int main()
{
    int hours;
    int cut;
    scanf("%d %d",&cut,&hours);//power cut off
    switch(cut)
    {
    case 1:if(hours<=1)
    printf("Short Interruption");
    else if(hours<=4)
    printf("Medium Interruption");
    else
    printf("Long interruption");
    break;
}
    return 0;
}