#include <iostream>

// struct X {
//     int one;
//     int two;
//     int three;
// };

// int main(){
//     X x{1,2};
//     std::cout << x.one;
// }


/*
    What does this return?

    Each identifier 'x' in this problem exist in different scopes. 
    The printed value is not 42 because the global x is shadowed by the local x in main. 
    When we enter the curly braces to initialize x, it is already declared but still 
    uninitialized. The nested scope x inside of the initialization braces then looks outwards 
    to the local scope x, which holds a garbage value and assigns it as such. 
    This initialization is functionally identical to: int x; x = x;
*/
int x{42};
int main() {
    int x{x};
    std::cout << x;
}