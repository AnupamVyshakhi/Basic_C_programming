#include<stdio.h>
void main()
{
    int a[100],sum=0,n;
    printf("ENTER THE LIMIT\n");
    scanf("%d",&n);
    printf("ENTER THE VALUES\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("THE SUM IS %d",sum);
}