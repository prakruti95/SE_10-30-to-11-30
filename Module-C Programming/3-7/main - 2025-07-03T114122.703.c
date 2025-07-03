#include<stdio.h>
#include<conio.h>

struct details
{
    int id;
    char name[50];
    char surname[50];
    char address[50];
    double salary;
}d1[50];


int main()
{
    for(int i=0;i<3;i++)
    {
         printf("Enter Id: ");
        scanf("%d",&d1[i].id);
        
        printf("Enter Name: ");
        scanf("%s",&d1[i].name);
        
        printf("Enter Surname: ");
        scanf("%s",&d1[i].surname);
        
        printf("Enter Address: ");
        scanf("%s",&d1[i].address);
        
        printf("Enter Salary: ");
        scanf("%lf",&d1[i].salary);
        
    }
   
     for(int i=0;i<3;i++)
    {
        printf("\n Your Id is : %d ",d1[i].id);
        printf("\n Your Salary is : %lf ",d1[i].salary);
        printf("\n Your Name is : %s ",d1[i].name);
        printf("\n Your Surname is : %s ",d1[i].surname);
        printf("\n Your Address is : %s ",d1[i].address);
    }
    printf("\n");
    
    return 0;
}