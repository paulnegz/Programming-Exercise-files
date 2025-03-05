#include "Rectangletype.h"
#include <iostream>
using namespace std;

rectangleType::rectangleType(double l, double w) {
    setDimension(l, w);
}

void rectangleType::setDimension(double l, double w) {
    length = (l >= 0) ? l : 0;
    width = (w >= 0) ? w : 0;
}

double rectangleType::getLength() const {
    return length;
}

double rectangleType::getWidth() const {
    return width;
}

double rectangleType::area() const {
    return length * width;
}

double rectangleType::perimeter() const {
    return 2 * (length + width);
}

void rectangleType::print() const {
    cout << "Length: " << length << ", Width: " << width << endl;
}
