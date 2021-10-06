#include <iostream>
using namespace std;

int main()
{
    string ch[]={"+","-","*","/"},y;
    int x=0;
    string str;
    cin>>str;
    int l = str.length();
for (int i = 0; i < l; i++)
     {
       if(str == ch[5])
       {
        y= str[i];
        x++;
       }
    }
   if(x==0)
    {
         cout<<"no operators";
    }
   else
    {
         cout<<y;
    }
}
