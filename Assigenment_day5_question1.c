#include<stdio.h>
void main()
{
    int a[10],b[10],n,temp;
    printf("ENTER THE SIZE\n");
    scanf("%d",&n);
    printf("ENTER THE VALUES OF ARRAY 1\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("ENTER THE VALUES OF ARRAY 2\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("THE ARRAYS AFTER SWAPPING\n");
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("ARRAY 1: ");
     for(int i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nARRAY 2: ");
     for(int i=0;i<n;i++)
    {
        printf("\t%d",b[i]);
    }
    
}