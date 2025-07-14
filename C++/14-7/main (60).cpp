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
class C  
{
     public:
        void c()
        {
            cout<<"C Called"<<endl;
        }
};
class D :public B,public C
{
     public:
        void d()
        {
            cout<<"D Called"<<endl;
        }
};

int main()
{
   
    D d;
    d.a();
    d.b();
    d.c();
    d.d();
    
      
      
      
      
       return 0;
}