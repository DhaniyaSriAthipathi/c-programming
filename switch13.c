#include<stdio.h>
int main()
{
    int loanType;
    int creditScore;
    scanf("%d %d",&loanType,&creditScore);
    switch(loanType)
    {
        case 1:
        if(creditScore>=700)
        printf("Approved");
        else
        printf("manual Review");
        break;
        case 2:
        if(creditScore>=700)
        printf("Approved");
        else 
        printf("Rejected");
        break;
        default:printf("invalid");
    }
    return 0;
}