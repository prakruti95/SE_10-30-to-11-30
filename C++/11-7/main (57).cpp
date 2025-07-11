#include <iostream>
using namespace std;

class Tops
{
    
        public:
        
        int i;
        string n;
        
        Tops(int id,string name)
        {
            i = id;
            n = name;
        }
        
        void display()
        {
            cout<<i<<endl;
            cout<<n<<endl;
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