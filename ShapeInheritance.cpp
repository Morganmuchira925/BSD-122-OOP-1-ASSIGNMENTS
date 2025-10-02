/*
Name: Morgan Muchira
Reg No: BCS-03-0093/2025
Description: Demonstrate the use of Inheritance*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Base class
class Shape {
protected:
    string color;

public:
    // Constructor
    Shape(string c) : color(c) {}
    
    // Member function to set color
    void setColor(string c) {
        color = c;
    }
    
    // Member function to get color
    string getColor() {
        return color;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    // Constructor that initializes length, width, and color
    Rectangle(float l, float w, string c) : Shape(c) {
        length = l;
        width = w;
    }
    
    // Member function to calculate area
    float area() {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor that initializes radius and color
    Circle(float r, string c) : Shape(c) {
        radius = r;
    }
    
    // Member function to calculate area
    float area() {
        return M_PI * radius * radius;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect(10, 5, "Red");
    
    // Create a Circle object
    Circle circle(7, "Blue");
    
    // Display rectangle details
    cout << "Rectangle Details:" << endl;
    cout << "Color: " << rect.getColor() << endl;
    cout << "Area: " << rect.area() << endl;
    
    // Display circle details
    cout << "Circle Details:" << endl;
    cout << "Color: " << circle.getColor() << endl;
    cout << "Area: " << circle.area() << endl;
    
    return 0;
}