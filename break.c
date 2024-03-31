#include<stdio.h>
void main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        printf("HAI!!!\n");
        if(i==5)
        {
            break;
        }
        printf("HELLO\n");
    }
    printf("FINISHED!!!");
}