#include <iostream>

int main() {
    int myArray[]{5, 4, 3, 2, 1};
    int number{myArray[0]};
    for(int jindex = 0; jindex < std::size(myArray); jindex++) {
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
