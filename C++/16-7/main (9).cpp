#include <iostream>
using namespace std;

class RBI
{
    public:
        virtual int rate()
        {
            return 0;
        }
};
class SBI : public RBI
{
    public:
        int rate()
        {
            return 7;
        }
};
class ICICI  : public RBI
{
    public:
        int rate()
        {
            return 8;
        }
};
class AXIS  : public RBI
{
    public:
        int rate()
        {
            return 9;
        }
};


int main()
{
     
    //  SBI s;
    //  ICICI i;
    //  AXIS a;
     
    //  cout<<s.rate()<<endl;
    //  cout<<i.rate()<<endl;
    //  cout<<a.rate()<<endl;
       // r = SBI();
    // cout<<r.rate()<<endl;
    // r = ICICI();
    // cout<<r.rate()<<endl;
    // r = AXIS();
    // cout<<r.rate()<<endl;
    
     RBI *r;
     SBI s;
     ICICI i;
     AXIS a;
     
     r = &s;
     cout<<r->rate()<<endl;
     r = &i;
     cout<<r->rate()<<endl;
     r = &a;
     cout<<r->rate()<<endl;
 

    return 0;
}