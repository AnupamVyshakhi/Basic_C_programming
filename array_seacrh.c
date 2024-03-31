#include<stdio.h>
void main()
{
    int a[100],n,i,val,flag=0;
    printf("ENTER THE LIMIT\n");
    scanf("%d",&n);
    printf("ENTER THE VALUES\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE NUMBER TO BE SEARCHED\n");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        if(val==a[i])
        {
           flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("NOT PRESENT\n");
    }
    else{
         printf("THE ENTERED VALUE %d PRESENT AT %d",val,i+1);
    }
}