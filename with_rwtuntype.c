#include<stdio.h>
int sum()
{
    int a,b,sum=0;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}
void main()
{
    int s=sum();
    printf("THE SUM IS %d",s);
}