#include "rectangleType.h"

rectangleType::rectangleType(double l, double w) {
    length = l;
    width = w;
}

void rectangleType::setLength(double l) {
    length = l;
}

void rectangleType::setWidth(double w) {
    width = w;
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
