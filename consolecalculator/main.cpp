#include <iostream>

enum class Values{Add,Subtract,Multiply,Divide};

struct Calculator {
    Calculator(Values init) {
        operation = init;
    }
    int calculate(int a, int b) {
        switch (operation) {
            case Values::Add: {
                return a + b;
            } break;
            case Values::Subtract: {
                return a - b;
            }
            case Values::Multiply: {
                return a * b;
            } break;
            case Values::Divide: {
                return a / b;
            } break;
        }
    }
    Values operation;
};
int main() {
    int num1{};
    int num2{};
    int while_loop{0};
    std::string operation{};

    Calculator set_to_add{Values::Add};
    Calculator set_to_sub{Values::Subtract};
    Calculator set_to_mult{Values::Multiply};
    Calculator set_to_div{Values::Divide};


    std::cout << "Enter operation";
    std::cin >> operation;
    std::cout << "Enter first number";
    std::cin >> num1;
    std::cout << "Enter second number";
    std::cin >> num2;

    if (operation == "Add")
        std::cout << num1 << " + " << num2 << " = " << set_to_add.calculate(num1, num2);
    else if (operation == "Subtract")
        std::cout << num1 << " - " << num2 << " = " << set_to_sub.calculate(num1, num2);
    else if (operation == "Multiply")
        std::cout << num1 << " * " << num2 << " = " << set_to_mult.calculate(num1, num2);
    else if (operation == "Divide")
        std::cout << num1 << " / " << num2 << " = " << set_to_div.calculate(num1, num2);
    else
        while_loop = 1;
    std::cout << "\n Thank you for using the calculator!";


}