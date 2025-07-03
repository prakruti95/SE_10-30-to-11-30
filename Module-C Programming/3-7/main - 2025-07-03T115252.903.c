#include<stdio.h>
#include<conio.h>

struct Address
{
     char city[50];
     int zip;
}a1;

struct student
{
    char name[50];
    int age;
    struct Address add;
}s1;

int main()
{
    printf("Enter Name: ");
    scanf("%s",&s1.name);
    
    printf("Enter Age: ");
    scanf("%d",&s1.age);
    
    printf("Enter City: ");
    scanf("%s",&s1.add.city);
    
    printf("Enter Zip: ");
    scanf("%d",&s1.add.zip);
    
    printf("\n Your All details are: ");
  
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);
    printf("\n City is %s",s1.add.city);
    printf("\n Zip is %d",s1.add.zip);
    
    
    
    return 0;
}