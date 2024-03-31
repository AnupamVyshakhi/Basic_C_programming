#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c;
    printf("ENTER THE ROW AND COLUMN \n");
    scanf("%d %d",&r,&c);
    printf("ENTER THE ELEMENTS\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Entered array is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}