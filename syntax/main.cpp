#include<iostream>
#include <string.h>
using namespace std;
void finder(string str)
{
     if(str.at(13) == ';')
     {
          cout<<"No syntax error";
     }
     else
     {
          cout<<"syntax error found";
     }
}
int main()
{
     string str("x = a+b-c-2ay; ");
     finder(str);
     return 0;
}
