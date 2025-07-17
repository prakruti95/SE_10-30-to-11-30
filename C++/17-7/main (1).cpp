#include <iostream>  
using namespace std;  
int main()  
{  


ineligible: 

  cout<<"You are not eligible to vote!\n";     

 
         int age;  
cout<<"Enter your age:\n";    
cin>>age; 

  
      if (age < 18)
      {
     
              goto ineligible;    
      }    
      else    
      {    
              cout<<"You are eligible to vote!";     
      }         
}  