#include "Vector.h"
#include <iostream>

//constructor
Vector::Vector(): v() {}

Vector::Vector(std::size_t n) : v(n,0.0){}

Vector::~Vector(){}

Vector::Vector(const Vector& rhs): v(rhs.v){};

Vector& Vector::operator=(const Vector& rhs){
    if(this != &rhs){
        v = rhs.v;
    }
    return *this;
};

Vector::Vector(Vector&& rhs): v(rhs.v){
    v.clear();
}

Vector& Vector::operator=(Vector&& rhs){
    if(this != &rhs){
        v = rhs.v;
        rhs.v.clear();
    }
    return *this;
}

void Vector::Print() const{
    std::cout << "[" ;
    for (std::size_t i = 0; i < v.size() ; i ++){
        double num = v[i];
        std::cout << num ;
        if (i != v.size()-1) std::cout << "," ;
        
    }
    std::cout << "]"<<std::endl;
}

void Vector::Push(double num){
    v.push_back(num);
}

double Vector::Norm() const{
    double tot = 0.0;
    for (std::size_t i = 0; i < v.size() ; i ++){
        double n = v[i];
        tot += n*n;        
    }
    return std::sqrt(tot);
}