#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("ENTER THREE NUMBERS!!!\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("%d IS GREATEST",n1);
        }
        else{
            printf("%d IS GREATEST",n3);
        }
    }
    else{
        if(n2>n3)
        {
            printf("%d IS GREATEST",n2);
        }
        else{
            printf("%d IS GREATEST",n3);
        }
    }
}