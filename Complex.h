#ifndef Complex_H
#define Complex_H

#include <iostream>
#include <sstream>
using namespace std;
class Complex {
private:
    double a;
    double b;

public:
    // Default constructor
    Complex() : a(0), b(0) {}

    // Parameterized constructor
    Complex(double aVal, double bVal) : a(aVal), b(bVal) {}
    //Copy cunstructor
    Complex(const Complex& other) {
        a = other.a;
        b = other.b;
    }

    // Getter for variable 'a'
    double getA() const {
        return a;
    }

    // Setter for variable 'a'
    void setA(double value) {
        a = value;
    }

    // Getter for variable 'b'
    double getB() const {
        return b;
    }

    // Setter for variable 'b'
    void setB(double value) {
        b = value;
    }
    //To string method
    // Friend functions for operations
    friend Complex multiply(const Complex& obj1, const Complex& obj2);
    friend Complex divide(const Complex& obj1, const Complex& obj2);
    friend Complex add(const Complex& obj1, const Complex& obj2);
    friend Complex subtract(const Complex& obj1, const Complex& obj2);
    friend Complex power(const Complex& obj , int exp);
    string toString() const;
};

#endif
