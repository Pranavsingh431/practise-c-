#include <iostream>
using namespace std;

int main(){

    cout<<"number1"<<endl;
    cout<<"number2"<<endl;
    cout<<"number3"<<endl; //this is compile time error.

    //runtime error 
    int value = 7/0;
    cout << "value"<< value << endl;

    return 0;

}