

#ifndef GRAPHIC_OBJECTS_H
#define GRAPHIC_OBJECTS_H

#include <iostream>

using namespace std;

class Point {
protected:
    double x, y;

public:
    Point(double _x = 0, double _y = 0) : x(_x), y(_y) {}

    void move(double dx, double dy) {
        x += dx;
        y += dy;
    }

    void setColor(const string& color) {
        
        cout << "Setting color to " << color << std::endl;
    }

    virtual void resize(double factor) = 0;

    virtual void rotate(double angle) = 0;

    virtual void draw() const = 0;

   
};

class Rectangle : public Point {
protected:
    double width, height;

public:
    Rectangle(double _x = 0, double _y = 0, double _width = 1, double _height = 1)
        : Point(_x, _y), width(_width), height(_height) {}

    void resize(double factor) override {
        width *= factor;
        height *= factor;
    }

    void rotate(double angle) override {
       
        cout << "Rotating rectangle by " << angle << " degrees" << endl;
    }

    void draw() const override {
       
        cout << "Drawing rectangle at (" << x << ", " << y << ") with width " << width << " and height " << height << endl;
    }

   
};

#endif
