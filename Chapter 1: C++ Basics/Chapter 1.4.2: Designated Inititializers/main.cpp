/*
    Aggregate Type:
    - an array type
    - meant to be a simple data container
    - class type that:
        - has no private or protected direct non-static data members
        - has no user-declared or inherited constructors
        - has no virtual, private, or protected base classes
        - has no virtual member functions

    struct Person {
        std::string name;
        int age;
    };

    Person person{"Ada", 30};


    - main purpose is to increase readability
    - 

    


*/

//ex:
struct Point {
    double x {0.0};
    double y {0.0};
};

const Point p {.x = 10.0, .y = 20.0}; // designated initializers
const Point offset {.y = 20.0}; // designated initializers, x will be default initialized to 0.0