#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    fgets(str,sizeof(str),stdin);
    int length=0;
    int digit=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='\n')
        {
            continue;
        }
        length++;
        if(str[i]>='0'&&str[i]<='9')
        {
            digit=1;
            
        }
    }
    printf("%d",length);
    if(digit)
    printf("username");
    else
    printf("not");
    return 0;



}