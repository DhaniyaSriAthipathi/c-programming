#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    int count=0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(!((str[i]>='0' && str[i]<='9') || (str[i]>='A' && str [i]<='Z') || (str[i]>='a' && str[i]<='z')))
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}