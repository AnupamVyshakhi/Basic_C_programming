#include<stdio.h>
void main()
{
    int i,n;
    printf("ENTER THE LIMIT\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    
}