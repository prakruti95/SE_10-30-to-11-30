#include<stdio.h>
#include<conio.h>
void main()
{
   //Array Variable
    int marks[5],i; 
   
    //variable value assign
    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    marks[4] = 50;
    
    // printf("\n %d",marks[0]);
    // printf("\n %d",marks[1]);
    // printf("\n %d",marks[2]);
    // printf("\n %d",marks[3]);
    // printf("\n %d",marks[4]);
    
    
    for(i=0;i<5;i++)
    {
        printf("\n %d",marks[i]);
    }
    
    
    
    
    
    
    getch();
}