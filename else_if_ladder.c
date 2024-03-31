#include<stdio.h>
void main()
{
    int n1,n2,ch;
    printf("ENTER TWO NUMBERS!!!\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("ENTER YOUR CHOICE!!!\n");
    printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("THE SUM IS %d",n1+n2);
    }
    else if(ch==2)
    {
        printf("THE DIFFERENCE IS %d",n1-n2);
    }
    else if(ch==3)
    {
        printf("THE MULTIPLICATION IS %d",n1*n2);
    }
    else if(ch==4)
    {
        printf("THE QUOTIENT IS %d",(n1/n2));
    }
    else{
        printf("YOU ARE A FOOOOL!!!");
    }
 

}