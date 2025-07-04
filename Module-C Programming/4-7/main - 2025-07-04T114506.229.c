//Unary Operator
#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 7,b;
    
    a++;
    printf("\n %d",a);//8
    
    ++a;
    printf("\n %d",a);//9
    
    b=a++;
    printf("\n %d",a);//10 
    printf("\n %d",b);//9  
    
    b++;
    printf("\n %d",b);//10
    
    return 0;
}