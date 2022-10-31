#include <iostream> // sometimes comment this to remove bugs and uncomment again;
using namespace std;

// do a simple calculator;

int main () 
{
    int firstNumber, secondNumber, result;
    string  operation;
    cout << "Give me your first number\n:";
    cin >> firstNumber;
    cout << "Give me your second number\n:";
    cin >> secondNumber;
    cout << "Choose what do you want to do '-' for subtraction, '+' for addition, '*' for multiplication, '/' for division\n\n:";
    cin >> operation;
    if (operation == "-")
    {
        result = firstNumber - secondNumber;
    }
    else if (operation == "+")
    {
        result = firstNumber + secondNumber;
    }
    else if (operation == "*")
    {
        result = firstNumber * secondNumber;
    }
    else if (operation == "/")
    {
        result = firstNumber / secondNumber;
    }
    cout << result; cout << "\n\n";
    return 0;
}