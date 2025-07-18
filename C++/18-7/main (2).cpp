#include <iostream>
using namespace std;

struct Rectangle
{
    int width,height;
};

int main()
{
    
    struct Rectangle rec;
    
    rec.width=8;
    rec.height=5;
    
    cout<<rec.width*rec.height<<endl;
    
     return 0;
}