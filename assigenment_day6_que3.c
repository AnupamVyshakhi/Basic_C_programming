#include<stdio.h>
void getArray(int a[])
{
    int i;
    printf("Enter the values\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
}
void displayArray(int a[])
{
    int i;
    printf("The entered array is\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
void main()
{
    int a[10];
    getArray(a);
    displayArray(a);
}