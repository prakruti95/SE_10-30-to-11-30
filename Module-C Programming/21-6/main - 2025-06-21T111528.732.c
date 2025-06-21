#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[7];
    int i,sum=0,avg;

    for(i=0;i<7;i++)
    {
        printf("\n Enter Your Marks");    
        scanf("%d",&marks[i]);
    }
    
     for(i=0;i<7;i++)
    {
         sum+= marks[i];
     }
      avg = sum/7;
     printf("\n Your Percentage is %d",avg);    

   
    
    
    
    
    getch();
}