#include<Stdio.h>
void year(int n)
{
   if((n%4==0 && n%100!=0) || (n%400==0))
   printf("Leap year");
   else
   printf("not leap"); 
}
int main()
{
    int n;
    scanf("%d",&n);
    year(n);
    return 0;
}