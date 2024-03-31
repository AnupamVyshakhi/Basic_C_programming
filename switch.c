#include<stdio.h>
void main()
{
    int ch;
    printf("ENTER YOUR CHOICE!!!\n");
    printf("1.POROTTA\n2.BIRIYANI\n3.FRIED RICE\n4.MANDI\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("YOU HAVE SELECTED POROTTA\n HAVE A GREAT DAY!!!\n");
               break;
        case 2:printf("YOU HAVE SELECTED BIRIYANI\n HAVE A GREAT DAY!!!\n");
               break;
        case 3:printf("YOU HAVE SELECTED FRIED RICE\n HAVE A GREAT DAY!!!\n");
               break;
        case 4:printf("YOU HAVE SELECTED MANDI\n HAVE A GREAT DAY!!!\n");
               break;
        default:printf("YOU HAVE SELECTED WRONG OPTION!!!");
    
    }
}