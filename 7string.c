#include<Stdio.h>
int main()
{
    char str[100];
    int i=0;
    int count=0;
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]!='a'&& str[i]!='A' && str[i]!='e' && str[i]!='E' && str[i]!='o' && str[i]!='O' && str[i]!='u' && str[i]!='U')
        {count++;}
        i++;
    }
    printf("%d",count);
    return 0;
}