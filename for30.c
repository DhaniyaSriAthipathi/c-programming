#include<stdio.h>
int main()
{
    int n;
    int total=0;
    int count =0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int patients;
        scanf("%d",&patients);
        total+=patients;
        if(patients>100)
        count++;
    }
    printf("Total patients : %d\n",total);
    printf("Overcrowded Days : %d",count);
    return 0;
}