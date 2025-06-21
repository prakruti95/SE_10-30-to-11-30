#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[5];
    int i,j;

    for(i=0;i<5;i++)
    {
        printf("\n Enter Your Marks");    
        scanf("%d",&marks[i]);
    }
    
     for(i=0;i<5;i++)
    {
        printf("\n Your Marks are %d",marks[i]);    
        
    }

   
    
    
    
    
    getch();
}