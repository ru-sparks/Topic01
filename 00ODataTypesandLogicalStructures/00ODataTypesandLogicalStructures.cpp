#include <iostream>
#include "LogicalStructures.h"

int commonPrimitiveTypes() {
    // Declaration of common primitive types

    // Integer types
    int myInt = 42;           // Signed integer
    unsigned int myUInt = 10; // Unsigned integer

    // Floating-point types
    float myFloat = 3.14f;    // Single-precision floating-point
    double myDouble = 2.718;  // Double-precision floating-point

    // Character types
    char myChar = 'A';        // Single character

    // Boolean type
    bool myBool = true;       // Boolean (true or false)

    // Displaying the values
    std::cout << "Integer: " << myInt << std::endl;
    std::cout << "Unsigned Integer: " << myUInt << std::endl;
    std::cout << "Float: " << myFloat << std::endl;
    std::cout << "Double: " << myDouble << std::endl;
    std::cout << "Character: " << myChar << std::endl;
    std::cout << "Boolean: " << std::boolalpha << myBool << std::endl;

    return 0;
}


int main() {
    commonPrimitiveTypes();
    checkNumber(-10);
    countUpTo(10);
    countdownFrom(10);
    printNumbers(5);
    processGrade('B');
    ternaryExample();

}
