#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("ENTER THE LIMIT\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("THE SUM IS %d",sum);
}