#include <iostream>
#include <string>


void myFunction() {
    std::cout << "You can define my content after main function!" << "\n\n";
};

void secondFunction(std::string fname) {
    std::cout << fname << "\nRefsnes\n\n";
}

void thirdFunction(std::string country = "Norway") {
    std::cout << country << "\n\n";
}

void multiFunction(std::string fname, int age) {
    std::cout << fname << " Refsnes. " << age << " years old. \n\n";
}

int functionReturns(int x) {
    return 5 + x;
}

int multiReturn(int x, int y) { 
    return x + y;
}

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

void passArrays(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        std::cout << myNumbers[i] << "\n\n";
    }
}

int functionOverload(int x, int y) {
    return x + y; 
}

double functionOverload(double x, double y) {
    return x + y;
}

int recursiveSum(int k) {
    if (k > 0) {
        return k + recursiveSum(k - 1);
    } else {
        return 0;
    } // oblicza silnie;
} 


int main() {
    myFunction();
    secondFunction("Jenny");
    secondFunction("Liam");
    thirdFunction("Poland");
    thirdFunction("USA");
    thirdFunction();
    multiFunction("Mate", 26);
    multiFunction("Agnes", 25);
    std::cout << functionReturns(300) << "\n";
    int funcSum = multiReturn(500, 320);
    std::cout << funcSum << "\n";
    int firstNum = 10;
    int secondNum = 20;
    std::cout << "Before swap: " << "\n";
    std::cout << firstNum << secondNum << "\n";
    swapNums(firstNum, secondNum);
    std::cout << "After swap: " << "\n";
    std::cout << firstNum << secondNum << "\n";
    std::cout << "\n\n";
    int myNumbers[5] = {10, 20, 30, 40, 50};
    passArrays(myNumbers);
    std::cout << "\n\n";
    std::cout << "\n\n";
    int myNum001 = functionOverload(500,350);
    double myNum002 = functionOverload(4.3, 6.26);
    std::cout << "Int: " << myNum001 << "\n";
    std::cout << "Double: " << myNum002 << "\n\n";
    std::cout << "\n\n";
    int result = recursiveSum(10);
    std::cout << result << "\n\n";
    return 0;
}