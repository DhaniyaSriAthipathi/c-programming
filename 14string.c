#include<stdio.h>
int main()
{
    char str[100];
    char astr[100];
    int i=0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        astr[i]=str[i];
        i++;
    }
    astr[100]='\0';
    printf("%s",astr);

    return 0;
}