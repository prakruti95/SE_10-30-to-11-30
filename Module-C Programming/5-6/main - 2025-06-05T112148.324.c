#include<stdio.h>
#include<conio.h>
void main()
{
    int myuserid=1123,mypass=1234;
    
    int userid;
    int pass;
    
    printf("Enter User ID: ");
    scanf("%d",&userid);
    
    printf("Enter User Password: ");
    scanf("%d",&pass);
    
    
    if(userid == myuserid)
    {
        printf("User id is right");  
    }
    if(pass == mypass)
    {
        printf("Pass  is right");
    }
    else
    {
        printf("Invalid Credentials");
    }
    
    
    
  
    
    getch();
}