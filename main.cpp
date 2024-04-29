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

    // Friend functions for operations
    friend Complex multiply(const Complex& obj1, const Complex& obj2);
    friend Complex divide(const Complex& obj1, const Complex& obj2);
    friend Complex add(const Complex& obj1, const Complex& obj2);
    friend Complex subtract(const Complex& obj1, const Complex& obj2);
};

// Multiplication function
Complex multiply(const Complex& obj1, const Complex& obj2) {
    double new_a = obj1.a * obj2.a;
    double new_b = obj1.b * obj2.b;
    return Complex(new_a, new_b);
}

// Division function
Complex divide(const Complex& obj1, const Complex& obj2) {
    double new_a = obj1.a / obj2.a;
    double new_b = obj1.b / obj2.b;
    return Complex(new_a, new_b);
}

// Addition function
Complex add(const Complex& obj1, const Complex& obj2) {
    double new_a = obj1.a + obj2.a;
    double new_b = obj1.b + obj2.b;
    return Complex(new_a, new_b);
}

// Subtraction function
Complex subtract(const Complex& obj1, const Complex& obj2) {
    double new_a = obj1.a - obj2.a;
    double new_b = obj1.b - obj2.b;
    return Complex(new_a, new_b);
}

int main() {
    Complex obj1(2, 3);
    Complex obj2(2, 2);

    Complex result_multiply = multiply(obj1, obj2);
    Complex result_divide = divide(obj1, obj2);
    Complex result_add = add(obj1, obj2);
    Complex result_subtract = subtract(obj1, obj2);

    cout << "Multiplication: a = " << result_multiply.getA() << ", b = " << result_multiply.getB() << endl;
    cout << "Division: a = " << result_divide.getA() << ", b = " << result_divide.getB() << endl;
    cout << "Addition: a = " << result_add.getA() << ", b = " << result_add.getB() << endl;
    cout << "Subtraction: a = " << result_subtract.getA() << ", b = " << result_subtract.getB() << endl;

    return 0;
}
