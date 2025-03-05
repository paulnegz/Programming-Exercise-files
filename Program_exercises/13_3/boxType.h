#ifndef BOXTYPE_H
#define BOXTYPE_H

#include "rectangleType.h"
#include <iostream>

class boxType : public rectangleType {
private:
    double height;
    
public:
    boxType(double l = 0, double w = 0, double h = 0);

    double getHeight() const;
    double volume() const;
    double surfaceArea() const;

    void setDimensions(double l, double w, double h);
    void print() const;

    friend boxType operator+(const boxType& b1, const boxType& b2);
    friend boxType operator-(const boxType& b1, const boxType& b2);
    friend bool operator==(const boxType& b1, const boxType& b2);
    friend bool operator!=(const boxType& b1, const boxType& b2);
};

#endif
