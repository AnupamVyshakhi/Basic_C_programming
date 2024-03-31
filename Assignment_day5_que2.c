#include<stdio.h>
void main()
{
  int a[10],n,count=0;
  printf("ENTER THE SIZE OF THE ARRAY\n");
  scanf("%d",&n);
  printf("ENTER THE VALUES\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    if (a[i]%2==0)
    {
       count++; 
    }
  }
  printf("NUMBER OF EVEN NUMBERS IN THE GIVEN ARRAY IS %d",count);
}