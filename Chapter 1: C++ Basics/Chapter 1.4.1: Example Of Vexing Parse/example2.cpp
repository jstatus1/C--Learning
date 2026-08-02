#include <iostream>

/*
*  What is function declaration and object construction?
*  Function declaration is when you declare a function with a specific signature, 
but do not provide an implementation. Function declarations tell the compiler 
* that a function exists. It does not run the function or create an object.


Ex: std::string name(); // This is a function declaration, not an object construction.
- This declares a funciton named 'name' that:
    - takes no arguments
    - returns a std::string

name.size(); // This will cause a compilation error because 'name' is not an object.

* Object construction is when you create an instance of a class or struct. Creates
* an object in memory and calls the constructor to initialize it.

* Comparison:

std::string a{}; // Object construction: creates an empty string
std::string b(); // Function declaration: declares a function returning a string 

***** USE {} FOR OBJECT CONSTRUCTION TO AVOID VEXING PARSE *****
*/

struct SomeType {
    int data = 42;
};


// Example of vexing parse:
int main() {
    //SomeType (*)(); // This is a function pointer syntax, not an object construction.

    SomeType st(); // This is a function declaration, not an object construction.
    std::cout << st.data << '\n'; // This will cause a compilation error because 'st' is not an object.
}