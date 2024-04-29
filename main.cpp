#include <iostream>
#include "Complex.h"

int main() {
    Complex obj1(2, 3);
    Complex obj2(2, 2);

    Complex resMultiply = multiply(obj1, obj2);
    Complex resDivide = divide(obj1, obj2);
    Complex resAdd = add(obj1, obj2);
    Complex resSub = subtract(obj1, obj2);
    Complex resPowA = power(obj1, 3);
    Complex resPowB = power(obj2, 3);

    cout << "Multiplication: " << resMultiply.toString() << endl;
    cout << "Division: " << resDivide.toString() << endl;
    cout << "Addition: " << resAdd.toString() << endl;
    cout << "Subtraction: " << resSub.toString() << endl;
    cout << "Power of a = " << resPowA.toString() << endl;
    cout << "Power of b = " << resPowB.toString() << endl;

    return 0;
}
