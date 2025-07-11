#include <iostream>
using namespace std;

class Tops
{
    
        public:
        Tops()
        {
            cout<<"a"<<endl;
        }
        Tops(int id)
        {
            cout<<"b"<<endl;
        }
        Tops(string name)
        {
            cout<<"c"<<endl;
        }
       
};

int main()
{
    
    Tops t1 = Tops();
    Tops t2 = Tops("1");
     Tops t3 = Tops(1);
    
    return 0;
}