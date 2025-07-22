#include <iostream>
using namespace std;

float division(int x, int y) 
{  
   if( y == 0 ) 
   {  
      throw "Attempted to divide by zero!";  
   }  
   return (x/y);  
}  
int main()
{
    //Exception - Errors - 
    
    int a,b,ans;
    
    cout<<"Enter Value For a:";
    cin>>a;
    
    cout<<"Enter Value For b:";
    cin>>b;
    
    try
    {
      ans = division(a, b);  
      cout << ans << endl;  
    }
    catch(const char* e)
    {
        cout<<e<< endl;  
    }
   
  
    
    
    
    
       
 
    return 0;
}