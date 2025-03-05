#include "Boxtype.h"
#include <iostream>
using namespace std;

int main() {
    boxType box1(3, 4, 5), box2(2, 3, 4);
    cout << "Box 1: " << box1 << endl;
    cout << "Box 2: " << box2 << endl;

    boxType sumBox = box1 + box2;
    cout << "Sum of Boxes: " << sumBox << endl;

    boxType diffBox = box1 - box2;
    cout << "Difference of Boxes: " << diffBox << endl;

    boxType prodBox = box1 * box2;
    cout << "Product of Boxes: " << prodBox << endl;

    cout << "Box 1 == Box 2: " << (box1 == box2) << endl;
    cout << "Box 1 != Box 2: " << (box1 != box2) << endl;
    cout << "Box 1 < Box 2: " << (box1 < box2) << endl;
    cout << "Box 1 > Box 2: " << (box1 > box2) << endl;

    cout << "Pre-increment Box 1: " << ++box1 << endl;
    cout << "Post-increment Box 1: " << box1++ << endl;
    cout << "After Post-increment Box 1: " << box1 << endl;

    cout << "Pre-decrement Box 2: " << --box2 << endl;
    cout << "Post-decrement Box 2: " << box2-- << endl;
    cout << "After Post-decrement Box 2: " << box2 << endl;

    boxType userBox;
    cout << "Enter box dimensions (length width height): ";
    cin >> userBox;
    cout << "User Input Box: " << userBox << endl;
    
    return 0;
}
