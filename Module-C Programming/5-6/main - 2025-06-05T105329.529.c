#include<stdio.h>
#include<conio.h>
void main()
{
    int usernum;
    int luckynum=8;
    
    printf("Enter Number between 1 to 10: ");
    scanf("%d",&usernum);
    
    if(luckynum == usernum)
    {
        printf("You are Winner");
    }
    else
    {
        printf("You are Looser");
    }
    
    
  
    
    getch();
}