#include<Stdio.h>
int main()
{
    int n,i;
    int count=0;
    
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        
        if(i==2 || i==3 || i==5|| i==7)
        count++;
    }
    printf("%d",count);
    return 0;
}
