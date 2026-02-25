#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    int count=0;
    fgets(str,sizeof(str),stdin);
    if(str[0]!='\n')
    count =1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}