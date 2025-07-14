#include <iostream>
using namespace std;

class A
{
    public:
        void a()
        {
            cout<<"A Called"<<endl;
        }
};
class B : public A
{
     public:
        void b()
        {
            cout<<"B Called"<<endl;
        }
};
class C : public A
{
     public:
        void c()
        {
            cout<<"C Called"<<endl;
        }
};

int main()
{
        B b;
        C c;
        
        b.b();
        c.c();
  

    return 0;
}