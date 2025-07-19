#include <iostream>
using namespace std;

class A
{
    int x=5;  
    
    public:  
    void display()  
    {  
        cout <<"Value of x is : "<< x<<endl;  
    }  
};
class B : public A
{
    int y = 10;  
    public:  
    void display()  
    {  
        cout << "Value of y is : "<<y<<endl;  
    }   
};

int main()
{
    A *a;
    B b;
    a=&b;   
    a->display();
   // b.display();
    return 0;
}