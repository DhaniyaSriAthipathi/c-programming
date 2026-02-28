#include<stdio.h>
int main()
{
    char str[100];
    char str1[100];
    char *p1;
    char *p2;
    fgets(str,sizeof(str),stdin);
    p1=str;
    p2=str1;
    while(*p1!='\0'){
        *p2=*p1;
    p1++;
    p2++;}
    *p2='\0';
    printf("%s",str1);
    return 0;



}