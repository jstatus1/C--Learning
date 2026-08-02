#include <iostream>
#include <string>

/*
* What is the vexing parse?
* The most vexing parse is a C++ rule where something that looks like object construction
* can be interpreted as a function declaration instead. 
    This can lead to confusion and unexpected behavior in code.
* Widget w(Thing()); // This is a function declaration, not an object construction.
*/

struct MyInt {
    int m_i;
};

class Doubler {
    public: 
        Doubler(MyInt i) : my_int(i) {}

        int doubleIt(){
            return my_int.m_i * 2;
        }

    
    private:
        MyInt my_int;
};

int main() {
    int i=5;
    Doubler d(MyInt{i}); //most vexing parse here!
    std::cout << d.doubleIt() << '\n';
}