#include <iostream>
#include "boxType.h"

int main() {
    boxType box1(3, 4, 5);
    boxType box2(2, 3, 4);
    
    std::cout << "Box 1:\n";
    box1.print();
    
    std::cout << "\nBox 2:\n";
    box2.print();

    boxType boxSum = box1 + box2;
    std::cout << "\nBox 1 + Box 2:\n";
    boxSum.print();

    boxType boxDiff = box1 - box2;
    std::cout << "\nBox 1 - Box 2:\n";
    boxDiff.print();

    if (box1 == box2) {
        std::cout << "\nBox 1 is equal to Box 2\n";
    } else {
        std::cout << "\nBox 1 is not equal to Box 2\n";
    }

    eturn EXIT_SUCCESS;
}
