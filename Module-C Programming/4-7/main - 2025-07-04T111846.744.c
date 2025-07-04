#include<stdio.h>
#include<conio.h>

void tops(int *num)
{
   *num*=2;  //num = num * 2;
    printf("\n %d",*num);
}

int main()
{
    int x=10;
    tops(&x);
    printf("\n %d",x);
    
    return 0;
}