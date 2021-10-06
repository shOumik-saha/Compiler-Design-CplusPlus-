#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int pre_processor(char buffer[])
{
 char keywords[20][20] = {"define","include"};
 int i, flag = 0;

 for(i = 0; i < 20; ++i)
 {
 if(strcmp(keywords[i], buffer) == 0)
 {
 flag = 1;
 break;
 }
 }
 return flag;
}
int main()
{
 char ch,buffer[15],  variables[] = "abcdefgxyz";
 ifstream fin("test.txt");
 int i,j,k=0,l=0;

 if(!fin.is_open()){
 cout<<"error while opening the file\n";
 exit(0);
 }

 while(!fin.eof())
 {
   ch = fin.get();
 for(i = 1; i < 6; ++i)
 {
   if(ch == variables[i])
   cout<<"variable-"<<i<<":"<<ch<<endl;
 }
  if(pre_processor(buffer) == 1)
   cout<<buffer<<" is a preprocessor\n";
 }

 fin.close();

 return 0;
}
