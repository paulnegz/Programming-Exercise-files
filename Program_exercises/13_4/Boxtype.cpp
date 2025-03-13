#include "Boxtype.h"
using namespace std;

boxType::boxType(double l, double w, double h) : rectangleType(l, w) {
    height = h;
}

// void boxType::setDimension(double l, double w, double h) {
//     rectangleType::setDimension(l, w);
//     height = (h >= 0) ? h : 0;
// }

double boxType::getHeight() const {
    return height;
}

double boxType::volume() const {
    return length * width * height;
}

double boxType::surfaceArea() const {
    return 2 * (length * width + width * height + height * length);
}

void boxType::print() const {
    cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
}

boxType boxType::operator+(const boxType& other) const {
    return boxType(length + other.length, width + other.width, height + other.height);
}

boxType boxType::operator-(const boxType& other) const {
    return boxType(length - other.length, width - other.width, height - other.height);
}

boxType boxType::operator*(const boxType& other) const {
    return boxType(length * other.length, width * other.width, height * other.height);
}

bool boxType::operator==(const boxType& other) const {
    return volume() == other.volume();
}

bool boxType::operator!=(const boxType& other) const {
    return volume() != other.volume();
}

bool boxType::operator<=(const boxType& other) const {
    return volume() <= other.volume();
}

bool boxType::operator<(const boxType& other) const {
    return volume() < other.volume();
}

bool boxType::operator>=(const boxType& other) const {
    return volume() >= other.volume();
}

bool boxType::operator>(const boxType& other) const {
    return volume() > other.volume();
}

boxType& boxType::operator++() {
    ++length; ++width; ++height;
    return *this;
}

boxType boxType::operator++(int) {
    boxType temp = *this;
    ++(*this);
    return temp;
}

boxType& boxType::operator--() {
    --length; --width; --height;
    return *this;
}

boxType boxType::operator--(int) {
    boxType temp = *this;
    --(*this);
    return temp;
}

ostream& operator<<(ostream& os, const boxType& box) {
    os << "Box Dimensions: (" << box.length << ", " << box.width << ", " << box.getHeight() << ")";
    return os;
}


istream& operator>>(istream& is, boxType& box) {
    // is >> box.length >> box.width >> box.getHeight();
    return is;
}
