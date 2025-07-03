#include<stdio.h>
#include<conio.h>

struct details
{
    int id;
    double salary;
}d1;


int main()
{
    printf("Enter Id: ");
    scanf("%d",&d1.id);
    
    printf("Enter Salary: ");
    scanf("%lf",&d1.salary);
    
    
    printf("\n Your Id is : %d ",d1.id);
    printf("\n Your Salary is : %lf ",d1.salary);
    
    return 0;
}