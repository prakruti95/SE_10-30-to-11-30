#include<stdio.h>
#include<conio.h>
void main()
{
   
    int n, sum = 0, i = 0 ;
   
   printf("Enter Your Number");
   scanf("%d",&n);//5
   
    tops:
    i++ ;   //1//2//3//4//5//6                                  
    sum += i ; //sum=sum+i//1
    
    
    if (i < n) 
	goto tops;
	
	printf ("\n sum of %d natural numbers = %d", n, sum) ;
    
    
    
    getch();
}