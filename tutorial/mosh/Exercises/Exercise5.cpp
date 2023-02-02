#include <iostream>
#include <cmath>

using namespace std;

/* 1/31/23: Stopped at 1:43:00 on freeCodeCamp Beginner to Advanced
and 1:01:00 at Mosh */

int main() {
/*Have the user enter a value to 
calculate the area of a circle.*/

    double radius;
    cout << "Enter a radius: ";
    cin >> radius;

    const double pi = 3.14;
    double area = pi * pow(radius, 2);

    cout << "Area of circle: " << area;

    return 0;
}