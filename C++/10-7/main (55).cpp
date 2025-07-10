#include<iostream>
using namespace std;

class Tops
{
    //data member
    public:
    int id;
    string name;
    
    //method
    void display()
    {
         cout<<"Your id is: "<<id<<endl;
         cout<<"Your Name is : "<<name<<endl;    
    }
    
};

int main()
{   
    Tops t1 = Tops();
    t1.id=101;
    t1.name="hensi";
    
    
    t1.display();
   
    
     return 0;
}