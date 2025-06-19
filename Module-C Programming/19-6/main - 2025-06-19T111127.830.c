#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,num;
    
    printf("Enter Number");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("*"); 
        }
        printf("\n");
    }
    
    
    return 0;
}