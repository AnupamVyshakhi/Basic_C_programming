#include<stdio.h>
void main()
{
    int a[10],n,temp;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d",&n);
    printf("ENTER THE VALUES\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("THE SORTED ARRAY IS \n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    
}