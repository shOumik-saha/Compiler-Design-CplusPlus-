#include<iostream>
#include <string.h>
using namespace std;
void split(char str[])
{
   char * token = strtok(str, " ");
   while( token != NULL )
   {
      cout<<token<<endl;
      token = strtok(NULL, " ");
   }
}
int main()
{
     char str[100]="John Wick: Chapter 3";
     split(str);
     return 0;
}
