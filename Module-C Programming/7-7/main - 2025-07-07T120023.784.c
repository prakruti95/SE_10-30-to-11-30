#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1, *f2, *f3;
    int number,i;
     
    printf("\n MYDATA file contents:");
    f1 = fopen("file1","w");
    
    for(i=1;i<=5;i++)
    {
        scanf("%d",&number);
        
        if(number==-1)
        break;
        putw(number,f1);
    }
    fclose(f1);
    
   f1=fopen("file1","r");
   f2=fopen("file2","w");
   f3=fopen("file3","w");
   
  
  
   
   while((number=getw(f1))!=EOF)
   {
     if(number%2==0)
	     putw(number,f3);
     else
	     putw(number,f2);
   }
   
   fclose(f1);
   fclose(f2);
   fclose(f3);
   
  //----------------------------READ-------------------------  
  
  f1 = fopen("file1","r");
  f2 = fopen("file2","r");
  f3 = fopen("file3","r");
  
    printf("\n contents of Common file:  ");
   while((number=getw(f1))!=EOF)
   printf("%d  ",number);
 
  
   printf("\n contents of ODD file:  ");
   while((number=getw(f2))!=EOF)
   printf("%d  ",number);


   printf("\n Contents of File EVEN:  ");
   while((number=getw(f3))!=EOF)
   printf("%d  ",number);

  
  
  fclose(f2);
  fclose(f3);
    
    return 0;
}