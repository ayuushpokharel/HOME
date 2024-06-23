#include <iostream>
using namespace std;

// Function to calculate the area of a circle
float area(float radius) {
    return 3.14159f * radius * radius;  // Using a constant value for π
}

// Function to calculate the area of a rectangle
float area(float length, float breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
float area(float base, float height, char) {
    return 0.5f * base * height;
}

int main() {
    float radius, length, breadth, base, height;

    // Area of a circle
    radius = 5.0f;
    cout << "Radius: " << radius << ", Area of the circle: " << area(radius) << endl;

    // Area of a rectangle
    length = 4.0f;
    breadth = 6.0f;
    cout << "Length: " << length << ", Breadth: " << breadth << ", Area of the rectangle: " << area(length, breadth) << endl;

    // Area of a triangle
    base = 3.0f;
    height = 4.0f;
    cout << "Base: " << base << ", Height: " << height << ", Area of the triangle: " << area(base, height, 'T') << endl;

    return 0;
}
