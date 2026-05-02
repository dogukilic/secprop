#ifndef VECTOR_H    
#define VECTOR_H
#include <vector> 
#include <cmath>

class Vector {

    public: 
    //constructor
    Vector();
    Vector(std::size_t size);
    //desctructor
    ~Vector() ;
    //copy constructor
    Vector(const Vector& rhs) ;
    //copy assignment operator
    Vector& operator=(const Vector& rhs) ;
    //move constructor
    Vector(Vector&& rhs);
    //move assignment operator
    Vector& operator=(Vector&& rhs) ;

    void Print() const;
    void Push(double num);
    double Norm() const;

    private:
        std::vector <double> v;
};



#endif
