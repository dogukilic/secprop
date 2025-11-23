#include "Point2D.h"
#include <iostream>

Point2D::Point2D(): x(0.0), y(0.0) {}

Point2D::Point2D(double xVal, double yVal): x(xVal), y(yVal) {}

Point2D::~Point2D() {}

Point2D::Point2D(const Point2D& rhs): x(rhs.x), y(rhs.y) {}

Point2D& Point2D::operator=(const Point2D& rhs) {
    if (this != &rhs) {
        x = rhs.x;
        y = rhs.y;
    }
    return *this;
}

Point2D::Point2D(Point2D&& rhs): x(rhs.x), y(rhs.y){
    rhs.x = 0.0,
    rhs.y = 0.0;
}

Point2D& Point2D::operator=(Point2D&& rhs){
    if (this != &rhs) {
        x = rhs.x;
        y = rhs.y;
        rhs.x = 0.0;
        rhs.y = 0.0;
    }
    return *this;
}

Point2D& Point2D::operator+=(const Point2D& rhs){
    x += rhs.x;
    y += rhs.y;
    return *this;
}

Point2D& Point2D::operator-=(const Point2D& rhs){
    x -= rhs.x;
    y -= rhs.y;
    return *this;
}

Point2D& Point2D::operator*=(const double scalar){
    x *= scalar;
    y *= scalar;
    return *this;
}

Point2D& Point2D::operator/=(const double scalar){
    if (scalar != 0.0) {
        x /= scalar;
        y /= scalar;
    } else {
        std::cerr << "Error: Division by zero in Point2D::operator/=" << std::endl;
    }

    return *this;
}


void Point2D::Print() const {
    std::cout << "Point2D(" << x << ", " << y << ")" << std::endl;
}

void Point2D::Test() {
    // --- Create some points
    Point2D p1(3.0, 4.0);
    Point2D p2(1.0, 2.0);

    std::cout << "Initial points:" << std::endl;
    p1.Print(); // should print (3, 4)
    p2.Print(); // should print (1, 2)
    std::cout << std::endl;

    // --- Test operator +=
    p1 += p2;
    std::cout << "After p1 += p2:" << std::endl;
    p1.Print(); // should print (4, 6)

    // --- Test operator -=
    p1 -= p2;
    std::cout << "After p1 -= p2:" << std::endl;
    p1.Print(); // should print (3, 4)

    // --- Test operator *=
    p1 *= 2.0;
    std::cout << "After p1 *= 2.0:" << std::endl;
    p1.Print(); // should print (6, 8)

    // --- Test operator /=
    p1 /= 2.0;
    std::cout << "After p1 /= 2.0:" << std::endl;
    p1.Print(); // should print (3, 4)

    // --- Test division by zero
    p1 /= 0.0; // should print error message
    p1.Print(); // should remain (3, 4)

    // --- Combined operations
    p1 += Point2D(1, 1);
    p1 *= 3;
    std::cout << "After combined operations (p1 += (1,1); p1 *= 3):" << std::endl;
    p1.Print(); // should print (12, 15)
}