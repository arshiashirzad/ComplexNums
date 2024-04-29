#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <sstream>
using namespace std;
class Complex {
private:
    double a;
    double b;

public:
    // Default constructor
    Complex();

    // Parameterized constructor
    Complex(double aVal, double bVal);

    // Copy constructor
    Complex(const Complex& other);

    // Getter for variable 'a'
    double getA() const;

    // Setter for variable 'a'
    void setA(double value);

    // Getter for variable 'b'
    double getB() const;

    // Setter for variable 'b'
    void setB(double value);

    // To string method
    string toString() const;

    // Friend functions for operations
    friend Complex multiply(const Complex& obj1, const Complex& obj2);
    friend Complex divide(const Complex& obj1, const Complex& obj2);
    friend Complex add(const Complex& obj1, const Complex& obj2);
    friend Complex subtract(const Complex& obj1, const Complex& obj2);
    friend Complex power(const Complex& obj, int exp);
};

#endif
