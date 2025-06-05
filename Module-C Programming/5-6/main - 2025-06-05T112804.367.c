#include<stdio.h>
#include<conio.h>
void main()
{
    
    char alpha;
    
    printf("Enter Alphabet: ");
    scanf("%c",&alpha);
    
    if(alpha=='A'|| alpha=='E'|| alpha=='I'|| alpha=='O'|| alpha=='U')
    {
        printf("It's a vowel");
    }
    else
    {
        printf("It's a consonant");
    }
    
    
    
  
    
    getch();
}