#include<Stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,palindrome=1;
    fgets(str,sizeof(str),stdin);
    j=strlen(str)-2;
    for(int i=0;i<j;i++)
    {
        if(str[i]==' ')
        {
            continue;
        }
        if(str[i]==' ')
        i--;
        j--;
        continue;
    }
    if(str[i]!=str[j])
    {
        palindrome=0;
        break;

    }
    j--;
    if(palindrome==1)
    printf("palindrome");
    else
    printf("not");
    return 0;
}