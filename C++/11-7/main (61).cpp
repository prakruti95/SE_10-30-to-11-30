#include <iostream>
using namespace std;

class Tops
{
        int id;
        string name;
        
        public:
        Tops(int id,string name)
        {
            this->id=id;
            this->name=name;
        }
        
        void display()
        {
            cout<<id<<endl;
            cout<<name<<endl;
        }
       
       
};

int main()
{
    
    Tops t1 = Tops(101,"abcd");
    Tops t2 = Tops(t1);
    
    t1.display();
    t2.display();
    
    return 0;
}