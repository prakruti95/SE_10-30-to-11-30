#include<stdio.h>
#include<conio.h>
void main()
{
    int fdigit,ldigit,num,ans=0;
    
    printf("Enter Number: ");
    scanf("%d",&num);//1234
    
    ldigit = num%10;
    
    while(num>0)
    {
        if (num > 9)
			num = num/10;
		else
		{
		    fdigit=num;
		    ans=fdigit+ldigit;
		    num=num/10;  
		}
    }
    
    
    //printf("%d",ldigit);
    
    // while(num>0)//1234
    // {
    //     if(num>9)
    //     {
    //         num=num/10;
    //     }
        
    //         fdigit=num;
    //         ans = fdigit+ldigit;
    //  }
       printf("Sum of First and Last digit is : %d ",ans);
     getch();
}