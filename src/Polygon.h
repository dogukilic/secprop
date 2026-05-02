#ifndef POLYGON_H
#define POLYGON_H

#include "Vector.h"
#include "Point2D.h"

//Polygon

class Polygon{
    public:
    //constructor
    Polygon();
    Polygon(double x, double y);
    //desctructor
    ~Polygon();
    //copy constructor
    Polygon(const Polygon& rhs);
    //copy assignment operator
    Polygon& operator=(const Polygon& rhs);
    //move constructor
    Polygon(Polygon&& rhs);
    //move assignment operator
    Polygon& operator=(Polygon&& rhs);


    private:
        std::vector<Point2D> points; 
};

#endif