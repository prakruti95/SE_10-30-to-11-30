#include<stdio.h>
#include<conio.h>

struct details
{
    int id;
    char name[50];
    char surname[50];
    char address[50];
    double salary;
}d1;


int main()
{
    printf("Enter Id: ");
    scanf("%d",&d1.id);
    
    printf("Enter Name: ");
    scanf("%s",&d1.name);
    
    printf("Enter Surname: ");
    scanf("%s",&d1.surname);
    
    printf("Enter Address: ");
    scanf("%s",&d1.address);
    
    printf("Enter Salary: ");
    scanf("%lf",&d1.salary);
    
    
    printf("\n Your Id is : %d ",d1.id);
    printf("\n Your Salary is : %lf ",d1.salary);
    printf("\n Your Name is : %s ",d1.name);
    printf("\n Your Surname is : %s ",d1.surname);
    printf("\n Your Address is : %s ",d1.address);
    
    
    return 0;
}