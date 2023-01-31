#include <iostream>

using namespace std;

int main() {
    //Problem: Write a program to convert a temp from fahrenheit to celsius.

    //**1/29/23 - Stopped at 53:00 on Mosh**

    cout << "Enter a temperature for Fahrenheit: ";

    double fahrenheit;
    cin >> fahrenheit;

    //C = 5/9 x (F - 32)
    double celsius = ((fahrenheit - 32)/1.8);

    cout << "Celsius value is: " << celsius;

    return 0;
}