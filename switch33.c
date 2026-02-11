#include<stdio.h>
int main()
{
    int bookType;
    int daysLate;
    scanf("%d %d",&bookType,&daysLate);
    switch(bookType)
    {
        case 1:printf("%d",daysLate*2);//general book
        break;
        case 2:printf("%d",daysLate*5);//referene book
        break;
        default:printf("invalid");
        break;

    }
    return 0;
}