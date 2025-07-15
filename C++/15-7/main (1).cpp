#include <iostream>
using namespace std;

class Animal
{
  public:
  void animal()
  {
      cout<<"Animal"<<endl;
  }
};
class Dog : public Animal
{
  public:
  void eat()
  {
      cout<<"Eating"<<endl;
  } 
};
class Babydog : public Dog
{
   public:
  void weep()
  {
      cout<<"Weeping"<<endl;
  }  
};

int main()
{
    Babydog b1;
    
    b1.eat();
    b1.weep();
    b1.animal();
    
    return 0;
}