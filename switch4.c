#include<stdio.h>
int main()
{
    int class;
    int age;
    int fare=300;
    scanf("%d %d",&class,&age);
    switch(class)
    {
        case 1:
        if(age <=12){
        fare=fare/2;
        printf("%d",fare);}
        else if(age>=60){
        fare-=100;
        printf("%d",fare);}
        break;
        
        default :printf("invalid");
        break;

    }
    return 0;
}