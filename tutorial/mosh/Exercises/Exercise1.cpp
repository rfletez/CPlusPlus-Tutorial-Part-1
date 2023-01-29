#include <iostream>
using namespace std;

//Write code to swap the value of two variables.

int main() {
    int a = 1;
    int b = 2;

    int swap = a;
    a = b;
    b = swap;

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    return 0;
}