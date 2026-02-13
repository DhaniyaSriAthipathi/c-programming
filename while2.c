#include<stdio.h>
int main()
{
    int n;
    int i=0;
    int initialBalance;
    int transaction;
    int total=0;
    scanf("%d %d",&n,&initialBalance);
    while(i<n)
    {
        scanf("%d",&transaction);
        initialBalance+=transaction;
        if(initialBalance>2000)
        {
            total++;
        }
        i++;
    }
    printf("%d",initialBalance);
    printf("%d",total);

    return 0;
}