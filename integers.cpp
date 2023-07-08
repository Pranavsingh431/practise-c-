#include <iostream>
using namespace std;

int main()
{
   int a{4};//braced initialisation
   int b(5);//functional initialisation
   int c = 7;//assignment initialisation
   int sum(a+b);
   cout<<sum<<endl;
   cout<<sizeof(a);//gives the size of the integer value.


return 0;
}