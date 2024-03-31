#include<stdio.h>
void main()
{
    int ch;
    printf("ENTER YOUR CHOICE!!!\n");
    printf("1.SUNDAY\n2.MONDAY\n3.TUESDAY\n4.WEDNESDAY\n5.THURSDAY\n6.FRIDAY\n7.SATURDAY\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("SUNDAY");
               break;
        case 2:printf("MONDAY");
               break;
        case 3:printf("TUESDAY");
               break;
        case 4:printf("WEDNESDAY");
               break;
        case 5:printf("THURSDAY");
               break;
        case 6:printf("FRIDAY");
               break;
        case 7:printf("SATURDAY");
               break;
        default:printf("INAVID ENTRY!!!");
    }
}