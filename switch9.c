#include<stdio.h>
int main()
{
    int roomtype;
    char season;
    scanf("%d %c",&roomtype,&season);
    switch(roomtype)
    {
        case 1 :if(season=='A')
        printf("2500");
        else if(season=='B')
        printf("2000");
        else
        printf("invalid");
        break;
        case 2:if(season=='C')
        printf("4000");
        else if(season=='D')
        printf("3000");
        break;
        default:printf("invalid");
        break;

    }
    return 0;
}