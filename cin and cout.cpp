#include <iostream>
using namespace std;
int main()
{
   int a;
   string b;
   cout<<"enter your name and age "<<endl;//<< symbolises that value is thrown out.
   
   getline(cin,b);//for full name with space where cin cant be used.

   cin>>a;//means input and >> means it is taking in the value of a.
   cout<<"so you are "<<b<<" and you are "<<a<<" years old."<<endl;
   return 0;
}

