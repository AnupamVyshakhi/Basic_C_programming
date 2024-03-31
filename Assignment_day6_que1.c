#include<stdio.h>
void main()
{
  char a[10];
  int count=0,flag=0;
  printf("ENTER A STRING\n");
  scanf("%s",a);
  for(int i=0;a[i]!= '\0';i++)
  {
    count++;
  }
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]!=a[count-1])
    {
      flag=1;
      break;
    }
    else
    {
      count--;
    }

  }
  if(flag==0)
  {
    printf("ENTERED STRING IS PALINDROME!!!\n");
  }
  else
  {
    printf("THE ENTERED STRING IS NOT PALINDROME!!!\n");
  }
}