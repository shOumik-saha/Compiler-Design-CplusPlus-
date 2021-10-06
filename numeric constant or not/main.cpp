#include <iostream>
using namespace std;
bool check_number(string n)
{
   for (int i = 0; i < n.length(); i++)
   if (isdigit(n[i]) == true)
      return true;
}
int main()
{
   string n;
   cout<<"Enter your input: ";
   cin>>n;
   if (check_number(n))
      cout<<n<< " is numeric constant"<<endl;
   else
      cout<<n<< " not a numeric constant"<<endl;
}
