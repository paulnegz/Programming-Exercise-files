#ifndef BOXTYPE_H
#define BOXTYPE_H

#include "Rectangletype.h"

class boxType : public rectangleType {
private:
    double height;

public:
    boxType(double l = 0, double w = 0, double h = 0);
    void setDimension(double l, double w, double h);
    double getHeight() const;
    double volume() const;
    double surfaceArea() const;
    void print() const;

    // Overloaded operators
    boxType operator+(const boxType& other) const;
    boxType operator-(const boxType& other) const;
    boxType operator*(const boxType& other) const;
    bool operator==(const boxType& other) const;
    bool operator!=(const boxType& other) const;
    bool operator<=(const boxType& other) const;
    bool operator<(const boxType& other) const;
    bool operator>=(const boxType& other) const;
    bool operator>(const boxType& other) const;
    boxType& operator++();    // Pre-increment
    boxType operator++(int); // Post-increment
    boxType& operator--();    // Pre-decrement
    boxType operator--(int); // Post-decrement

    friend std::ostream& operator<<(std::ostream& os, const boxType& box);
    friend std::istream& operator>>(std::istream& is, boxType& box);
};

#endif // BOXTYPE_H
