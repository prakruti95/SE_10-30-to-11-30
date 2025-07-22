#include <iostream>
#include <cstring>  
using namespace std;

int main()
{
   
  char key[] = "mango";   
  char buffer[50];
  
  
  do
  {
     cout<<"Enter Your Fruit Name:"<<endl;
     cin>>buffer;
      
  }
  while(strcmp(key,buffer)!=0);
    
 cout<<"Answer is correct!!"<<endl; 
    return 0;
}