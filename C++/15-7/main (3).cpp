#include <iostream>
using namespace std;

class Shape
{
   protected:
   int a,b;
   
   public:
   void getvalue(int a1,int b1)
   {
       a = a1;
       b = b1;
   }
   
};

class Rect : public Shape
{
    public:
    void rarea()
    {
        int ans = a*b;
        cout<<"Area of Rectangle is : "<<ans<<endl;
    }
    
};

class Tri  : public Shape
{
    public:
    void tarea()
    {
        int ans = 0.5*a*b;
        cout<<"Area of Traingle is : "<<ans<<endl;
    }
};

int main()
{
    int a,b;
    
    cout<<"Enter Value for a:"<<endl;
    cin>>a;
    cout<<"Enter Value for b:"<<endl;
    cin>>b;
    
    Rect r;
    Tri t;
    
    r.getvalue(a,b);
    t.getvalue(a,b);
    r.rarea();
    t.tarea();
    
    
    
   
    
    return 0;
}