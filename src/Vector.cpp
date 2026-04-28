#include "Vector.h"
#include <iostream>

//constructor
Vector::Vector() {};
Vector::Vector(std::size_t n) : v(n,0.0){}

Vector::~Vector(){}

void Vector::Print() const{
    std::cout << "[" ;
    for (std::size_t i = 0; i < v.size() ; i ++){
        double num = v[i];
        std::cout << num ;
        if (i != v.size()-1) std::cout << "," ;
        
    }
    std::cout << "]"<<std::endl;
}