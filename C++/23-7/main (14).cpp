#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("tops.txt");
    
    cout<<"Enter Your Name";
    cin.getline(data,100);
    outfile<<data<<endl;

    cout << "Enter your age: "; 
    cin >> data;
    cin.ignore();
    
    outfile.close();
    
    ifstream infile;
    infile.open("tops.txt");
    
    cout<<"Reading data from file";
    
    infile>>data; 
    cout<<data<< endl;	
    
    // infile>>data; 
    // cout<< data<< endl; 
    
     infile.close();
    
    

    return 0;
}