#include<stdio.h>
#include<conio.h>

struct details
{
    int num;   
};
int main()
{
    struct details maindetails;
    struct details *structptr;
    structptr=&maindetails;
    structptr->num=20;
    printf("\n %d",maindetails.num);
   return 0;
}