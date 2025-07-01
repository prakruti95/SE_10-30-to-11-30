#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b)
{
    int c=0;
    printf("\n Before Swap Value in Function : %d , %d",*a,*b);  
     c = *a; 
     *a = *b;  
     *b = c; 
    printf("\n After Swap Value in Function : %d , %d",*a,*b);
    
}

int main()
{
    
    int x,y;
    
    x=5;
    y=7;
    
    printf("\n Before Swap Value : %d , %d",x,y);
    swap(&x,&y);
    printf("\n After Swap Value : %d , %d",x,y);
    
    return 0;
}