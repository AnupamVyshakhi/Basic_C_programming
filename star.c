#include<stdio.h>
void main()
{
    int n,i,j;
    printf("ENTER THE LIMIT\n");
    scanf("%d",&n);
    for(i=5;i>0;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}