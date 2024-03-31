#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],n,i,j,c[10][10];
    printf("ENTER THE SIZE OF THE ARRAYS\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS OF THE ARRAY 1:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE ELEMENTS OF THE ARRAY 2:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("THE SUM OF 2 ARRAYS IS:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}