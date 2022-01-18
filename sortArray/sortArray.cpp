#include <iostream> // necessary for input/output/size functionality

int userInputs() {
    int arrayNum{};
    std::cout << "Welcome to the 'Arrayer'!\n";
    std::cout << "Please enter the content of the array you'd like to create: ";
    std::cin >> arrayNum;
    std::cout << "\nThank you. " << arrayNum << " arrays have been created\n";
    return arrayNum;
}

int main() {
    int num{userInputs()};
    int myArray[]{num,num,num,num,num}; // the array
    int number{};
    for(int jindex: myArray) {
        for(int index = 0; index < std::size(myArray); index++) {
            if (myArray[index] > myArray[index+1]) {
                number = myArray[index];
                myArray[index] = myArray[index+1];
                myArray[index+1] = number;
            }
        }
    }
    for(int index = 0; index < std::size(myArray); index++) {  std::cout << myArray[index]; }

    return 0;
}
