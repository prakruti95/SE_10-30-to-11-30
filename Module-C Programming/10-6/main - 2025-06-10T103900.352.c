#include<stdio.h>
#include<conio.h>
int main()
{
    
    int num;
    
    printf("\n Select Your Language \n Press 1 For English \n Press 2 For Hindi \n Press 3 For Gujarati");
         printf("\n Enter Number");
    scanf("%d",&num);

    switch(num)
    {
        case 1: printf("\n Your Language is English");
        break;
        
        case 2: printf("\n Your Language is Hindi");
        break;
        
        case 3: printf("\n Your Language is Gujarati");
        break;
        
        default : printf("\n Your Number is not valid");
        break;
        
    }
    
    
    
    return 0;
}