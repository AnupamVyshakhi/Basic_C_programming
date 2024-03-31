#include<stdio.h>
void main()
{
    int a[100],n;
    printf("ENTER THE LIMIT\n");
    scanf("%d",&n);
    printf("ENTER THE VALUES\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("THE ENTERED VALUES ARE\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }


}