#include <iostream>

double final_number(double num1, double num2, char op);
double final_number(double num1, double num2, double num3, char op);

namespace initial_vars {

    double num1;
    double num2;
    double num3;

    char op;
}

int main() {

    char entkey;

    std::cout << "Welcome to calculator v1.1" << std::endl;
    std::cout << "The current operators are: +/*-." << std::endl;
    std::cout << "Enter number1: ";
    std::cin >> initial_vars::num1;
    std::cout << "Enter number2: ";
    std::cin >> initial_vars::num2;
    std::cout << "To operate on a third number, type 'y'. (or type 'n' to not operate): ";
    std::cin >> entkey;

    if (entkey == 'y' || entkey == 'Y'){
        std::cout << "Enter number 3: ";
        std::cin >> initial_vars::num3;
        std::cout << "Enter the operator: ";
        std::cin >> initial_vars::op;
        std::cout << final_number(initial_vars::num1, initial_vars::num2, initial_vars::num3, initial_vars::op) << std::endl;
    }
    else if (entkey == 'n' || entkey == 'N') {
        std::cout << "Enter the operator: ";
        std::cin >> initial_vars::op;
        std::cout << final_number(initial_vars::num1, initial_vars::num2, initial_vars::op) << std::endl;
    }

    std::cout << "Enter either 'y' or 'n'." << std::endl;
    return 0;
}

double final_number(double num1, double num2, char op) {
    switch (op){
        case '+': return num1 + num2; break;
        case '-': return num1 - num2; break;
        case '/': return num1 / num2; break;
        case '*': return num1 * num2; break;
        default: std::cout << "Invalid operator" << std::endl; return 0;
    }
}

double final_number(double num1, double num2, double num3, char op){
    switch (op){
        case '+': return num1 + num2 + num3; break;
        case '-': return num1 - num2 - num3; break;
        case '/': return num1 / num2 / num3; break;
        case '*': return num1 * num2 * num3; break;
        default: std::cout << "Invalid operator" << std::endl; return 0;
    }
}