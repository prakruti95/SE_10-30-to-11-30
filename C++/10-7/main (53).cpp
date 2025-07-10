#include<iostream>
using namespace std;

class Tops
{
    //data member
    public:
    int id;
    string name;
    
};
int main()
{   
    
    //object
    //Tops t1;
    Tops t1 = Tops();
    
    t1.id=101;
    t1.name="hensi";
    
    Tops t2 = Tops();
    
    t2.id=102;
    t2.name="divya";
    
    Tops t3 = Tops();
    
    t3.id=103;
    t3.name="Jiya";
    
    cout<<"Your id is: "<<t1.id<<endl;
    cout<<"Your Name is : "<<t1.name<<endl;
    cout<<"================================="<<endl;
    cout<<"Your id is: "<<t2.id<<endl;
    cout<<"Your Name is : "<<t2.name<<endl;
    cout<<"================================="<<endl;
    cout<<"Your id is: "<<t3.id<<endl;
    cout<<"Your Name is : "<<t3.name<<endl;
    
     return 0;
}