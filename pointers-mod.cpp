#include <iostream>
#include <string>

int main() {




    std::string food = "Pizza";
    std::string* ptr = &food;

    std::cout << food << "\n";
    std::cout << &food << "\n";


    std::cout << *ptr << "\n";


    *ptr = "Hamburger";

    std::cout << *ptr << "\n";
    std::cout << food << "\n";


    return 0;
}