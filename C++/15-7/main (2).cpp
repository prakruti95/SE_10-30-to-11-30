#include <iostream>
using namespace std;

class A
{
    protected:
    int a;
    
    public:
    void get_a(int n)
    {
        a = n;
    }
};

class B
{
    
    protected:
    int b;
    
    public:
    void get_b(int n)
    {
        b = n;
    } 
};

class C : public A,public B
{
    public:
    void multi()
    {
        int c = a*b;
        cout<<c<<endl;
    }
};

int main()
{
    int a,b;
    
    cout<<"Enter Value for a:"<<endl;
    cin>>a;
    cout<<"Enter Value for b:"<<endl;
    cin>>b;
    
    
    C c;
    c.get_a(a);
    c.get_b(b);
    c.multi();
    
    return 0;
}