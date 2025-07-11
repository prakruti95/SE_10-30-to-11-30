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
    int id,id2;
    string name,name2;
    
    
    cout<<"Enter id";
    cin>>id;
    
    cout<<"Enter Name";
    cin>>name;
    
    cout<<"Enter id";
    cin>>id2;
    
    cout<<"Enter Name";
    cin>>name2;
    
    Tops t1 = Tops(id,name);
    Tops t2 = Tops(id2,name2);
    
    t1.display();
   t2.display();
    
    return 0;
}