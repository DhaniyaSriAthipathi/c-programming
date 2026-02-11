#include<stdio.h>
int main()
{
    int flight;
    int extraBaggage;
    int a=300;
    scanf("%d %d",&flight,&extraBaggage);
    switch(flight)
    {
        case 1:
        if(extraBaggage<=5)
        printf("%d",a*extraBaggage);
       break;
       case 2:
       if(extraBaggage==3)
       printf("no charge");
       break;
       case 3:
       if(extraBaggage>5){
       extraBaggage-=3;
       printf("%d",a*extraBaggage);
       }
       break;
       default:
       printf("invalid");
       break;
    }
    return 0;
}