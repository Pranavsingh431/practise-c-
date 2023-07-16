#include <iostream>
using namespace std;
/*
function can be defined as a well defined thing which contains some commands
which we can use in a simple way like-
let y = f(x) = a+b
now if we use this predefined function for natural numbers it will display
all the values of a+b in natural numbers.
in the same way we can use it in programming
first we create a new function
like this---
 */
int multiply(int first_number, int second_number){
    int m = first_number * second_number;
    return m; 
}

int main(){
     //then we can execute it without writing it again and again.
    cout << multiply(2,3);




    return 0;
}
