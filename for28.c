#include<stdio.h>
int main()
{
    int n;
    int total=0;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int score;
        scanf("%d",&score);
        total+=score;
        if(score<40)
        count++;
    }
    printf("Average Score : %d \n",total/n);
    printf("Failed Subjects : %d",count);
    return 0;
}