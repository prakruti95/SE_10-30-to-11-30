#include<stdio.h> 
#include<conio.h> 
void main()
{
    int num1 = 6;
    int num2 = 3;
    int add,sub,mul,division;
    
    add = num1+num2;
    printf("\n Addition of %d and %d  is %d",num1,num2,add);
    
    sub = num1 - num2;
    printf("\n Substraction of %d and %d  is %d",num1,num2,sub);
    
    mul = num1*num2;
    printf("\n Multiplication of %d and %d  is %d",num1,num2,mul);
    
    division = num1/num2;
    printf("\n Division of %d and %d  is %d",num1,num2,division);
    
    getch();
}