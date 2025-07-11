#include <iostream>
using namespace std;

class Tops
{
    //constructor
    public:
    Tops()
    {
        cout<<"Constructor Called"<<endl;
    }
    
};

int main()
{
    Tops t1 = Tops();
    //t1.tops();
    
    
    return 0;
}