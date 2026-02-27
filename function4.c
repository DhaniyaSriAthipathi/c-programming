#include<Stdio.h>
void circle(int r)
{
    double area=0;
    area=3.14*r*r;
    printf("%.2lf",area);
}
int main()
{
    int r;
    scanf("%d",&r);
    circle(r);
    return 0;

}