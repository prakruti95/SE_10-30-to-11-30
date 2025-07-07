#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1;
    char ch;
    
    //File Write
    f1 = fopen("tops","w");
    printf("\n Enter Your Data: ");
    while((ch=getchar())!='0')
    {
        putc(ch,f1);//printf
        //getchar//scanf
        //printf("%d",ch);
        
    }
    fclose(f1);
    
     //File Read
    printf("\n Read data from file: ");
    f1=fopen("tops","r");     
    while((ch=getc(f1))!=EOF)
    {	
        printf("%c",ch);
    } 
    fclose(f1);
    
    
    return 0;
}