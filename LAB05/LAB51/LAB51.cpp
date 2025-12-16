#include <iostream>
#include <string>
using namespace std;

double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}
double calculateArea(double length, double width) {
    return length * width;
}
double calculateArea(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}
int main() {
    double radius, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << calculateArea(radius) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << calculateArea(length, width) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << calculateArea(base, height, true) << endl;

    return 0;
}