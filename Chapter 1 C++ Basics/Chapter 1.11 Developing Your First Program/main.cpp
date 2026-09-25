#include <iostream>
using namespace std;


/*
    What is undefined behavior?
    - when you violate certain language rules 
        - dereferencing a null pointer, signed integer overflow, accessing through dangling ref,
        accessing through unaligned ptr
        - when undefined behavior occurs, the program may behave in unpredictable ways
        - use '-Wall -Wextra -g -fsanitize=address,undefined'

    
    What are 'unspecified' and 'implementation-defined' behavior?
    - 
*/


int main(){
    cout << "Input an integer: ";
    int num{};
    cin >> num;


    cout << "Double that number: " << num*2 << endl;
    cout << "Triple that number: " << num*3 << endl;
    return 0;
}