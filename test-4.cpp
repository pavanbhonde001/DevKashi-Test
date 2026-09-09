#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Pythagorean Theorem
    double sideA = 3.0, sideB = 4.0;
    double hypotenuse = hypot(sideA, sideB); 
    cout << "Hypotenuse: " << hypotenuse << endl;

    // Trigonometry (Requires radians)
    double degrees = 45.0;
    double radians = degrees * (M_PI / 180.0); // Convert to radians

    cout << "sin(45): " << sin(radians) << endl;
    cout << "cos(45): " << cos(radians) << endl;
    cout << "tan(45): " << tan(radians) << endl;

    return 0;
}
