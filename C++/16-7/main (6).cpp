#include <iostream>
using namespace std;

class Cal
{
    public:
        int count(int a,int b)
        {
            return a+b;
        }
        double count(double c,double d)
        {
            return c*d;
        }
};

int main()
{
        
        Cal c;
        
        cout<<c.count(3,2)<<endl;//5
        cout<<c.count(3.00,2.00)<<endl;//6

    return 0;
}