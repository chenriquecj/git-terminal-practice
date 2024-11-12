#include <iostream>


using namespace std;

int main() {
    int num1, num2;
    char operation;

    std::cout << "Type the first number of the equation: ";
    std::cin >> num1;

    std::cout << "Type the second number of the equation: ";
    std::cin >> num2;

    std::cout << "Wich operation do you wish to execute?('+', '-', '*', '/') ";
    std::cin >> operation;

    switch(operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0 ) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operation" << std::endl;
    } 

    return 0;
}