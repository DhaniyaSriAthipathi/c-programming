#include<stdio.h>
int main()
{
    int connectionType;
    int units;
    int bills=0;
    scanf("%d %d",&connectionType,&units);
    switch(connectionType)
    {
        case 1 :if(units<=100)
            bills=units*3;
        else
        bills=(100*3)+((units-100)*5);

       
        break;
        case 2 :if(units>100)
        bills =units*7;
        else
        bills=(100*7)+((units-100)*10);
        bills = bills-80;
        break;
        default :printf("invalid ");
        break;

    }
    printf("%d",bills);
    return 0;
}