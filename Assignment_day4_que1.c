#include<stdio.h>
void main()
{
    int n,i;
    printf("ENTER THE NUMBER!!!\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",i,n,i*n);
    }

}