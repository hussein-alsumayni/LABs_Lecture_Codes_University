// Lab 1 - Task 1: Sphere surface area and volume
#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double r;

    cout << "The value of PI is: " << PI << endl;

    cout << "Enter the radius of the sphere: ";
    cin >> r;

    double surfaceArea = 4.0 * PI * r * r;
    double volume = (4.0 / 3.0) * PI * r * r * r;

    cout << "Surface area = " << surfaceArea << endl;
    cout << "Volume       = " << volume << endl;

    return 0;
}
