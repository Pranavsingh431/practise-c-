#include <iostream>
using namespace std;

int main()
{
   float a;
   cout<<"enter the number ";
   cin>>a;
   for(int i=1;i<11;i++)
   /*
   for loop means that first we take i=1 and it will go until i<11 and simultaneously
   adding 1 to i with each iteration
   thus the output will be 1 2 3 4 5 6 7 8 9 10.
   */
   {
    cout<< a <<" X "<< i <<" = "<< a*i<< endl;//here we are multiplying each value of i with a.
   }

    return 0;
}