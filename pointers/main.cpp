#include <iostream>
#include <string>

int main() {
    std::string food = "pizza"; // variable declaration
    std::string* ptr = &food;   // pointer declaration


    // Reference: Output the memory address of food with the pointer;
    std::cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza);
    std::cout << *ptr << "\n";
 


    // Note that the * sign can be confusing here, as it does two different things in our code:

    // When used in declaration (string* ptr), it creates a pointer variable.
    // When not used in declaration, it act as a dereference operator.
    return 0;
}