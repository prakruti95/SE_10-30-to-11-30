#include<stdio.h>
#include<conio.h>
int main()
{
    
    int a[3][3],b[3][3],result[3][3]={0};
    int i,j,k;
    
    printf("\n Enter First Matrix of 3*3 Elements: ");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n Enter Second Matrix of 3*3 Elements: ");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
            
        }
    }
    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("Resultant Matrix is : %d",result[i][j]);
            
        }
        printf("\n");
    }
    
    
    
    return 0;
}