#include<stdio.h>
int main()
{
    int callType;
    int minutes;
    scanf("%d %d",&callType,&minutes);//mobile call charges
    switch(callType)
    {
        case 1:printf("%d",minutes*1);//local
    break;
    case 2:printf("%d",minutes*3);//STD
    break;
    case 3:printf("%d",minutes*10);//ISD
    break;
    default:printf("invalid");
    break;

}
    return 0;
}