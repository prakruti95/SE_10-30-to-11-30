#include <iostream>
using namespace std;

class A
{
    protected:  
    int a;  

    public:  
    void get_a()  
    {  
       cout << "Enter the value of 'a' : " <<endl;  
       cin>>a;  
    }  
};
class B : public A
{
    protected:  
    int b;  

    public:  
    void get_b()  
    {  
       cout << "Enter the value of 'b' : " <<endl;  
       cin>>b;  
    }  
};
class C 
{
    protected:  
    int c;  

    public:  
    void get_c()  
    {  
       cout << "Enter the value of 'c' : " <<endl;  
       cin>>c;  
    }  
};
class D : public B,public C
{
    public:
    void multi()
    {
        int ans = a*b*c;
        cout<<ans<<endl;
    }
};


int main()
{
   
   D d;
   
   d.get_a();
   d.get_b();
   d.get_c();
   d.multi();
    
    
   
    
    return 0;
}