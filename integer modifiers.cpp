#include <iostream>
using namespace std;

int main()
{
   signed int a(3);//it is kinda default so not needed much.
   unsigned int b(4);//used when you want to save only positive numbers in int variable.
   short int c(23);//it is going to store the int value in only 2 bytes in memory.
   long int d(234);//it is going to store the int value in either 4 or 8 bytes in memory.
   long long int e(234);//it is going to store the int value in 8 bytes in memory.
   signed long intf(234);/*
-We can use integer modifier two or more at one time also like in the above case.
And we also can make a lot of different combinations using different modifiers.
  
Note-- modifiers can only be used in case of integers.
*/


//to check the size of the above integers we can use sizeof() function--
   cout<<sizeof(a)<<endl;

   return 0;

}