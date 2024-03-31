#include<stdio.h>
void main()
{
    int n,a[]={1,3,2,1,3,4},count=0,i,j;
    int sum=0,avg=1;
    for(i=0;i<6;i++)
    {
        int flag=0;
        for(j=0;j<6;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
             flag=1;
             break;
            }
            
        }
        if(flag==0)
        {
            count++;
            sum=sum+a[i];
        }
        
    }
    avg=sum/count;
    printf("AVERAGE IS %f",avg);

}