#include <iostream>
using namespace std;

class Account
{
    public:
    float salary = 60000;
};
class Programmer : public Account
{
    public:
    int bonus = 5000;
    
    void count(int salary,int bonus)
    {
        int ans = salary+bonus;
        cout<<ans<<endl;
    }
};

int main()
{
    int s,b;
    
    cout<<"Enter Salary"<<endl;
    cin>>s;
    
    cout<<"Enter Bonus"<<endl;
    cin>>b;
    
    
    Programmer p;
    
    p.count(s,b);
    // cout<<p.salary<<endl;
    //  cout<<p.bonus<<endl;

    return 0;
}