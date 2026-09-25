#include <iostream>  // for std::cout and std::cin

/*
* Chapter 1.4 - Variable Assignment and Initialization
* 1. What is the difference between initialization and assignment?
* Initializaiton is creating the variable and giving it an inital 
* value at the point when it is created. Assignment is giving a 
* value to the variable at some point after the variable is created. 

* 2. What form of initialization should you prefer when you want to initalize a variable with
* a specific value? 

* Direct List initialization (direct brace initialization)

* 3. What are default-initialization and value-initializaition? What is the behavior of each?
* Which should you prefer?

* Default-initialization is when a variable is created without an initial value. 
* The variable will have an indeterminate value if it is a built-in type.  (e.g. int x;)

* Value-initialization is when a variable is created and initialized to a default value (e.g., 0 for built-in types). 
* You should prefer value-initialization to ensure that variables have a known initial state. (e.g , int x{};)
*/

int main()
{
    int w1 {4};
    [[maybe_unused]] int w2 {5};

    int w3; // default-initialization
    int w4{}; // value-initialization

    std::cout << "w1: " << w1 << std::endl;
    std::cout << "w3: " << w3 << std::endl; // w3 has an indeterminate value
    std::cout << "w4: " << w4 << std::endl;
    return 0;
}