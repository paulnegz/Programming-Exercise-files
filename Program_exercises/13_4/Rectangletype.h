#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

class rectangleType {
protected:
    double length;
    double width;

public:
    rectangleType(double l = 0, double w = 0);
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;
};

#endif // RECTANGLETYPE_H
