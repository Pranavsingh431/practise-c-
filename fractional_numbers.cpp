#include <iostream>
#include <iomanip>//for setprecision command to work we have to include a new library called iomanip.
using namespace std;

int main()
{
      float a{1.123456789012345f};//put f at the end to specify floating type number.
      double b{1.123456789012345};
      long double c{1.123456789012345L};//put L at the end to specify long double type number.
    
      cout<<setprecision(20);
      cout<<a<<endl;//float stores number only upto a precision of 7 digits.
      cout<<b<<endl;//double stores 15 digits.
      cout<<c<<endl;//long double stores more than 15 digits.

      cout<<"the size of a "<<sizeof(a)<<endl;//4 bytes
      cout<<"the size of b "<<sizeof(b)<<endl;//8 bytes
      cout<<"the size of b "<<sizeof(c)<<endl;//12 bytes

      return 0;
}