#include <iostream>

int main() {
    // The const keyword specifies that a varaiable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.141519;
    // PI = 420.34; - > this results in error
    double r = 8;
    double circumferance = 2 * PI * r;

    std::cout <<circumferance << "cm" ;

    return 0;
}