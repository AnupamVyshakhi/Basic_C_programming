#include<stdio.h>
void main()
{
    int n,i,j;
    printf("ENTER THE LIMIT!!!\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}