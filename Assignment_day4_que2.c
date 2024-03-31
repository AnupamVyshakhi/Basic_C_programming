#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("ENTER THE LIMIT!!!\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of odd numbers = %d",sum);
}