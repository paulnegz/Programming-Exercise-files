#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

class rectangleType {
private:
    double length;
    double width;

public:
    rectangleType(double l = 0, double w = 0);
    
    void setLength(double l);
    void setWidth(double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
};

#endif
