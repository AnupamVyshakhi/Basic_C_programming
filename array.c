#include<stdio.h>
void main()
{
   int a[5];
   printf("ENTER THE ARRAY\n");
   for(int i=0;i<5;i++)
   {
    scanf("%d",&a[i]);
   } 
   printf("THE ENTERED VALUES ARE\n");
   for(int i=0;i<5;i++)
   {
    printf("%d\n",a[i]);
   } 

}