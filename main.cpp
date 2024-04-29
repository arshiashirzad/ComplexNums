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

    std::cout << "Multiplication: " << resMultiply.toString() << std::endl;
    std::cout << "Division: " << resDivide.toString() << std::endl;
    std::cout << "Addition: " << resAdd.toString() << std::endl;
    std::cout << "Subtraction: " << resSub.toString() << std::endl;
    std::cout << "Power of a = " << resPowA.toString() << std::endl;
    std::cout << "Power of b = " << resPowB.toString() << std::endl;

    return 0;
}
