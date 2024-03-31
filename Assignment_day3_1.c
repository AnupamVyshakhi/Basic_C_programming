#include<stdio.h>
void main()
{
    float mark;
    printf("ENTER YOUR MARK\n");
    scanf("%f",&mark);
    if(mark>=50)
    {
        printf("PASSED!!!");
    }
    else{
        printf("FAILED!!!");
    }
}