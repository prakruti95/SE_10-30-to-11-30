#include <iostream>
using namespace std;

struct Rectangle
{
    int width,height;
    
    Rectangle(int width,int height)
    {
        this->width = width;
        this->height=height;
    }
    void display()
    {
        cout<<"Area of Rectangle is : "<<width*height<<endl;
    }
};

int main()
{
  
    struct Rectangle rec = Rectangle(8,5);
     struct Rectangle rec2 = Rectangle(5,5);
    rec.display();
    rec2.display();
    
    
  
  
     return 0;
}