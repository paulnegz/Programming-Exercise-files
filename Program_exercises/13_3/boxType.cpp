#include "boxType.h"

boxType::boxType(double l, double w, double h) : rectangleType(l, w) {
    height = h;
}

double boxType::getHeight() const {
    return height;
}

double boxType::volume() const {
    return getLength() * getWidth() * height;
}

double boxType::surfaceArea() const {
    return 2 * (getLength() * getWidth() + getLength() * height + getWidth() * height);
}

void boxType::setDimensions(double l, double w, double h) {
    setLength(l);
    setWidth(w);
    height = h;
}

void boxType::print() const {
    std::cout << "Box dimensions: " << getLength() << " x " << getWidth() << " x " << height << std::endl;
    std::cout << "Volume: " << volume() << std::endl;
    std::cout << "Surface Area: " << surfaceArea() << std::endl;
}

boxType operator+(const boxType& b1, const boxType& b2) {
    return boxType(b1.getLength() + b2.getLength(), b1.getWidth() + b2.getWidth(), b1.height + b2.height);
}

boxType operator-(const boxType& b1, const boxType& b2) {
    return boxType(b1.getLength() - b2.getLength(), b1.getWidth() - b2.getWidth(), b1.height - b2.height);
}

bool operator==(const boxType& b1, const boxType& b2) {
    return (b1.getLength() == b2.getLength()) && (b1.getWidth() == b2.getWidth()) && (b1.height == b2.height);
}

bool operator!=(const boxType& b1, const boxType& b2) {
    return !(b1 == b2);
}
