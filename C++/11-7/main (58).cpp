#include <iostream>
using namespace std;

class Tops
{
    
        public:
        
        int id=0;
        string name="";
        
        Tops(int id,string name)
        {
            this->id = id;
            this->name = name;
        }
        
        void display()
        {
            cout<<id<<endl;
            cout<<name<<endl;
        }
    
};

int main()
{
    
    Tops t1 = Tops(101,"xyz");
    Tops t2 = Tops(102,"abcd");
    
    t1.display();
    t2.display();
    
    return 0;
}