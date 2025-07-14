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
class C : public B
{
     public:
        void c()
        {
            cout<<"C Called"<<endl;
        }
};
class D : public C
{
     public:
        void d()
        {
            cout<<"D Called"<<endl;
        }
};

int main()
{
    
    D d1;
    d1.a();
    d1.b();
    d1.c();
    d1.d();

    return 0;
}