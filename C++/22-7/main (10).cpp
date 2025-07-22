#include <iostream>
#include <cstring>  
using namespace std;

int main()
{
    char key[25], buffer[25];  
    
    cout<<"Enter Your Name";
    cin>>key;
    
   strcpy(buffer,key);
    
    cout<<buffer<<endl;    
 
    return 0;
}