#include<stdio.h>
int main()
{
    int type;
    scanf("%d",&type);
    switch(type)
    {
        case 1 :printf("Admin");
        break;
        case 2 :printf("User");
        break;
        case 3 :printf("Guest");
        break;
        default :printf("invalid");
        break;
    }
    return 0;
}