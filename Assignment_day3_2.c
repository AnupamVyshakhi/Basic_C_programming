#include<stdio.h>
void main()
{
    float totalmark;
    printf("ENTER YOUR MARK PERCENTAGE\n");
    scanf("%f",&totalmark);
    if(totalmark>=90)
    {
        printf("A GRADE!!!");
    }
    else if(totalmark>=80&&totalmark<=89)
    {
         printf("B GRADE!!!");
    }
     else if(totalmark>=70&&totalmark<=79)
    {
         printf("C GRADE!!!");
    }
     else if(totalmark>=60&&totalmark<=69)
    {
         printf("D GRADE!!!");
    }
     else if(totalmark>=50&&totalmark<=59)
    {
         printf("E GRADE!!!");
    }
    else
    {
        printf("FAILED!!!");
    }
}