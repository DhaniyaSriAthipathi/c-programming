#include<stdio.h>
int main()
{
    char str[20];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            printf("valid");
        }
        else
        printf("invalid");
    }
    return 0;
}