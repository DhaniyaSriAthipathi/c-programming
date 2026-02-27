#include<Stdio.h>
void number(int a,int b)
{
    int power=1;
    for(int i=1;i<=b;i++)
    {
        power*=a;
    }
    printf("%d",power);

}
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    number(a,b);
    return 0;
}