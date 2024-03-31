#include<stdio.h>
void sum(int a,int b)
{
    int sum=a+b;
    printf("The sum is %d",sum);
}
void main()
{
    int a,b;
    printf("Entre the numbers\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
}