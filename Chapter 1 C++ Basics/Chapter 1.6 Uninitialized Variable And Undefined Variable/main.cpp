/*
    Chapter 1.6 : uninitialized variable and undefined behavior
    
    - C/C++ does not automatically initialize variable to given value (such as zero)
    - default value of variable is garbage value (random value)
    - uninitialized variable is a variable that has been declared but not assigned a value

    - initialized = the object is given a known value @ point of definition
    - assignment = the object is given a known value beyond the pont of definition
    - uninitialized = the object has not been given a known value yet

    - Undefined Behavior 
        - result of executing code whose behavior is not defined by the C++ language standard
        - result of executing code whose behavior is not well defined by the language
    
    - Implementation Defined Behavior
        - compiler chooses one allowed behavior and must document that choice
        
    - Unspecified Behavior
        - result of executing code whose behavior is not well defined by the language

    - Ill-Formed Program
        - program that violates the C++ language standard
        - compiler is not required to diagnose ill-formed programs
        - IFNDR: ill formed no diagnostic required
            - programs that are ill-formed but the standard does require compiler to report an error
            
*/