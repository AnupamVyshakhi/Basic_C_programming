#include<stdio.h>
void main()
{
    int i,j,n;
    printf("ENTER THE LIMIT\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}