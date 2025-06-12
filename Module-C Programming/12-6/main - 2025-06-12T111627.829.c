#include<stdio.h>
#include<conio.h>
void main()
{
   int num,ans=0,i;
   
   printf("Enter Any Number");
   scanf("%d",&num);
   
   printf("Table of Given Number is: ");
   for(i=1;i<=10;i++)
   {
       ans = num*i;
        printf("\n %d * %d = %d",num,i,ans);
       
   }
   
    
    
    getch();
}