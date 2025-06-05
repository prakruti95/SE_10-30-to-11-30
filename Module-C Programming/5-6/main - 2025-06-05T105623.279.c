#include<stdio.h>
#include<conio.h>
void main()
{
    int usernum;
    int luckynum=8;
    
    printf("Enter Number between 1 to 10: ");
    scanf("%d",&usernum);
    
    printf("\n Your Lucky Number is %d ",luckynum);//8
    luckynum = usernum;
    printf("\n Your Lucky Number is %d ",luckynum);
    
    
    
  
    
    getch();
}