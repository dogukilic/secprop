#ifndef POINT2D_H
#define POINT2D_H

//Point2D .h
//2D simple point class

class Point2D {

    public:

    //constructor
    Point2D();
    Point2D(double x, double y);
    //desctructor
    ~Point2D();
    //copy constructor
    Point2D(const Point2D& rhs);
    //copy assignment operator
    Point2D& operator=(const Point2D& rhs);
    //move constructor
    Point2D(Point2D&& rhs);
    //move assignment operator
    Point2D& operator=(Point2D&& rhs);


    //Arithmetic operators
    Point2D& operator+=(const Point2D& rhs);
    Point2D& operator-=(const Point2D& rhs);       
    Point2D& operator*=(const double scalar);
    Point2D& operator/=(const double scalar);

    void Print() const;

    //Small Tests
    static void Test();


    private:
        double x;
        double y;
    
};

#endif

