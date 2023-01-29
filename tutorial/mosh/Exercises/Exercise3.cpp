#include <iostream>

using namespace std;

int main() {
    const double sales = 95000;
    const double tax_rate = 0.04;
    const double county_rate = 0.02;

    double stateTax = sales * tax_rate;
    double countyTax = sales * county_rate;

    double total_sales = sales - (stateTax + countyTax);

    cout << "Sales: $" << sales << endl;
    cout << "State Taxes: $" << stateTax << endl;
    cout << "County Taxes: $" << countyTax << endl;
    cout << "Total sales after tax: $" << total_sales << endl;

    return 0;
}