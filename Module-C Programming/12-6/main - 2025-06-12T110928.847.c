#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem=0,sum=0;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
    while(num>0)
    {
        rem = num%10;
        sum+=rem;//sum=sum+rem
        num=num/10;
    }
    
    printf("Sum of all digits: %d",sum);
    
    
    
    getch();
}