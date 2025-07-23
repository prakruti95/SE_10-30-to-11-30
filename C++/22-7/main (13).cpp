#include <iostream>
using namespace std;
class MyClass 
{
    friend class SecondClass;
   
    private:
    int secret;
    
    public:
    MyClass() : secret(0)
    {
        
    } 
    void printmembers()
    {
        cout<<secret<<endl; 
    }
};

class SecondClass
{
    public:
	void change(MyClass& yourclass, int x)
	 { 
		yourclass.secret = x;
	 } 
};
int main()
{ 
    MyClass my_class;
    SecondClass sec_class; 
	
	my_class.printmembers();//0
	sec_class.change( my_class, 5 );
	my_class.printmembers(); //5
    
    return 0;
} 