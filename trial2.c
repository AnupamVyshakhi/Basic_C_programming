#include<stdio.h>
void main()
{
    int n,flag=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("NOT PRIME\n");
    }
    else
    {
        printf("PRIME\n");
    }

}