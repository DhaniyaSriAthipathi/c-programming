#include<Stdio.h>
int main()
{
    int category;
    int distance;
    scanf("%d %d",&category,&distance);
    switch(category){
    case 1:
    if(distance<=30)
    printf("Eligible");
    else
    printf("Eligible with extra fee");
    break;
    case 2:
    if(distance<=30)
    printf("Eligible");
    else
    printf("Not eligible");
    break;
    default:printf("invalid");
    break;

    }
    return 0;
}