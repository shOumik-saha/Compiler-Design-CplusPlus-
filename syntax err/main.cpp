#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    if  (number%2 == 0); //we can't use semicolon at the end of if condition,so the program has syntax error
     {
        cout<<number<<"is even";
    //paretnthesis missing will also show syntax error
    else
     {
        cout<<number<<"is odd";
    }
    return 0;
}
