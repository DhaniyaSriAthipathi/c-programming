#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if((n>='a' && n<='z') ||(  n>='A' && n<='Z')){
    printf("alphabet");}
    else if(n>='0' && n<='9'){
    printf("digit");}
    else
    printf("special characters");
    return 0;
}