#include<stdio.h>
void main()
{
     int p;
     float r,n,si=0;
     printf("ENTER THE PRINCIPLE AMOUNT\n");
     scanf("%d",&p);
     printf("ENTER THE INTEREST RATE\n");
     scanf("%f",&r);
     printf("ENTER THE NUMBER OF YEARS\n");
     scanf("%f",&n);
     si=(p*r*n)/100;
     printf("THE SIMPLE INTERST IS %f",si);
    
}