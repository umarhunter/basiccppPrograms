#include <iostream>

enum class Values{Add,Subtract,Multiply,Divide}; // this enum class contains values (data) that I'll need in order to run operations

struct Calculator { //
    Calculator(Values init) { //constructor initializes the value/operation to avoid issues
        operation = init;
    }
    int calculate(int a, int b) { // functions takes two integer inputs a and b then does computation based off the operation variable
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
    Values operation; // initializing the object of type 'Values' named operation
};

int exitfunction(int a) {
    std::cout << "\nThank you for using the calculator! Please come again :)";
    return a = 5;
}

int main() {
    int num1{}; // first input #
    int num2{}; // second input #
    int while_loop = 0; // while loop variable
    std::string operation{}; // string variable that will take user operation input

    Calculator set_to_add{Values::Add}; // creating elements in Calculator to initialize it and prepare for the computations ahead (with the variables we created)
    Calculator set_to_sub{Values::Subtract};
    Calculator set_to_mult{Values::Multiply};
    Calculator set_to_div{Values::Divide};

    std::cout << "Welcome to my humble console calculator. Your choices of operation are: Add, Subtract, Multiply, and Divide.\n";
    std::cout << "NOTE: Make sure you don't have any extra characters or spaces as this may affect your output!\n";

    while (while_loop == 0) {
        std::cout << "Enter operation: \n";
        std::cin >> operation;

        if (operation == "Add") {
            std::cout << "Enter first number: \n";
            std::cin >> num1;
            std::cout << "Enter second number: \n";
            std::cin >> num2;
            std::cout << num1 << " + " << num2 << " = " << set_to_add.calculate(num1, num2);
            }
        else if (operation == "Subtract") {
            std::cout << "Enter first number: \n";
            std::cin >> num1;
            std::cout << "Enter second number: \n";
            std::cin >> num2;
            std::cout << num1 << " - " << num2 << " = " << set_to_sub.calculate(num1, num2); }
        else if (operation == "Multiply") {
            std::cout << "Enter first number: \n";
            std::cin >> num1;
            std::cout << "Enter second number: \n";
            std::cin >> num2;
            std::cout << num1 << " * " << num2 << " = " << set_to_mult.calculate(num1, num2);
        }
        else if (operation == "Divide") {
            std::cout << "Enter first number: \n";
            std::cin >> num1;
            std::cout << "Enter second number: \n";
            std::cin >> num2;
            std::cout << num1 << " / " << num2 << " = " << set_to_div.calculate(num1, num2);
        }
        else
            while_loop = exitfunction(while_loop); // breaks the loop

    }

}