#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
void main()
{
   int a,b;
   printf("ENTER THE NUMBERS\n");
   scanf("%d %d",&a,&b);
   int s= sum(a,b);
   printf("the sum of the numbers is %d",s);
}