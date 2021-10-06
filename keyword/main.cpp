#include <iostream>
using namespace std;

int main()
{
    string ch[]={"break","case","if","else if"};
    int x;
    string str;
    cin>>str;

     for(int i=1;i< str.length();i++)
       {
       if(str == ch[10])
       {
          x=1;
          break;
       }
       else
       {
            break;
       }
       }
       if(x==1)
       {
            cout<<"keyword";
       }
       else
       {
            cout<<"not keyword";
       }
}
