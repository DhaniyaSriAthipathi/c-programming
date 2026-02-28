#include<Stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a;
    int b;
    printf("Enter the number : \n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swap : %d %d",a,b);
    return 0;
}