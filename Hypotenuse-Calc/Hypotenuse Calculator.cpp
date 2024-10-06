#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {

    double a;
    double b;
    double c;

    cout << "Enter leg a: ";
    cin >> a;
    cout << "Enter leg b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The hypotenuse is " << c;
    
    return 0;
}