#include <iostream>
using namespace std;

class Complex {
private:
    double a;
    double b;

public:
    // Default constructor
    Complex() : a(0), b(0) {}

    // Parameterized constructor
    Complex(double a_val, double b_val) : a(a_val), b(b_val) {}

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
};
int main() {
    return 0;
}
