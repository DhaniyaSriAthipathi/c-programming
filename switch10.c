#include<stdio.h>
int main()
{
    int code;
    int experience;
    int salary;
    int bonus;
    scanf("%d %d",&code,&experience);
    switch(code)
    {
        case 1:
        if(code==1){
        salary =50000;
        bonus=5*5000;
        salary+=bonus;
        printf("%d",salary);
        }
        break;
        case 2:
        if(code==2)
        printf("35000");
        break;
        default :printf("invalid");
        break;
        
    }
    return 0;
}