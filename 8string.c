#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    int count=0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        count++;
        i++;
    }
    printf("%d",count);

    return 0;
}