#include <iostream>
#include <cmath>

using namespace std;

int main() {
/*Have the user enter a value to 
calculate the area of a circle.*/

    double radius;
    cout << "Enter a radius: ";
    cin >> radius;

    double pi = 3.14;
    double area = pi * pow(radius, 2);

    cout << "Area of circle: " << area;
    
    return 0;
}