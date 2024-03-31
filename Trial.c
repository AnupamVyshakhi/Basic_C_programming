#include<stdio.h>
void main()
{
    int a[10];
    printf("ENTER THE ELEMENTS\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("THE REVERSED ARRAY IS\n");
    for(int i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    
}