#include<iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"Enter Your Choice";
    cin>>num;
    
    switch(num)
    {
        case 1: cout<<"Your Number is 1"<<endl;
        break;
        
        case 2: cout<<"Your Number is 2"<<endl;
        break;
        
        case 3: cout<<"Your Number is 3"<<endl;
        break;
        
        default:cout<<"Your Number is not valid"<<endl;
        break;
        
    }
    
    return 0;
}

