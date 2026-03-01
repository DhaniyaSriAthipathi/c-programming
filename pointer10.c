#include<stdio.h>
int main()
{
    char str[100];
    char *p;
    int count=0;
    fgets(str,sizeof(str),stdin);
    p=str;
    while(*p)
    {
        if((*p!=' ') && (p==str ||*(p-1)==' '))
        count++;
        p++;
    }
    printf("%d",count);
    return 0;
}