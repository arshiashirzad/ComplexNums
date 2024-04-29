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
    string toString() const {
        stringstream ss;
        ss << a<< "+" << b <<"i";
        return ss.str();
    }
    // Friend functions for operations
    friend Complex multiply(const Complex& obj1, const Complex& obj2);
    friend Complex divide(const Complex& obj1, const Complex& obj2);
    friend Complex add(const Complex& obj1, const Complex& obj2);
    friend Complex subtract(const Complex& obj1, const Complex& obj2);
    friend Complex power(const Complex& obj , int exp);
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
Complex power(const Complex& obj, int exp){
    double new_a = obj.a * obj.a;
    double new_b= obj.b * obj.b;
    for(int i=1 ; i<exp ;i++ ){
        new_a *= obj.a;
        new_a *= obj.b;
    }
    return Complex(new_a , new_b);
}

int main() {
    Complex obj1(2, 3);
    Complex obj2(2, 2);

    Complex resMultiply = multiply(obj1, obj2);
    Complex resDivide = divide(obj1, obj2);
    Complex resAdd = add(obj1, obj2);
    Complex resSub = subtract(obj1, obj2);
    Complex resPowA = power(obj1, 3);
    Complex resPowB = power(obj2, 3);

    cout << "Multiplication:" << resMultiply.toString() << endl;
    cout << "Division: a = " << resDivide.toString() << endl;
    cout << "Addition: a = " << resAdd.toString() << endl;
    cout << "Subtraction: a = " << resSub.toString() << endl;
    cout << "Power of a = "<< resPowA.toString()<<endl;

    return 0;
}
