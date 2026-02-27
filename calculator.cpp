#include<iostream>
using namespace std; 
int main()
{
    int first ,second;
    char  operation;
    cout<<"Enter the first number\n";
    cin>>first;
    cout<<"Enter the second number\n";
    cin>>second;
    cout<<"Enter the operation \n";
    cin>>operation;
    switch(operation) 
    {
        case '+' : cout<<first+second;
        break;
        case '-' : cout<<first-second;
        break;
        case '*' : cout<<first*second;
        break;
        case '/' : cout<<first/second;
        break ;
        default : cout<<"Invalid number input or operation\n";
    }
}