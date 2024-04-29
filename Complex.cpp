#include "Complex.h"

// Multiplication function
Complex multiply(const Complex& obj1, const Complex& obj2) {
    double new_a = obj1.a * obj2.a - obj1.b * obj2.b;
    double new_b = obj1.a * obj2.b + obj1.b * obj2.a;
    return Complex(new_a, new_b);
}

// Division function
Complex divide(const Complex& obj1, const Complex& obj2) {
    double denominator = obj2.a * obj2.a + obj2.b * obj2.b;
    double new_a = (obj1.a * obj2.a + obj1.b * obj2.b) / denominator;
    double new_b = (obj1.b * obj2.a - obj1.a * obj2.b) / denominator;
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

// Power function
Complex power(const Complex& obj, int exp) {
    Complex result(1, 0);
    for (int i = 0; i < exp; i++) {
        result = multiply(result, obj);
    }
    return result;
}
