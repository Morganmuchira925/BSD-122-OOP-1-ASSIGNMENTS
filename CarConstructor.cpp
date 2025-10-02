/*
Name: Morgan Muchira
Reg No:BCS-03-0093/2025
Description: Using a single class(Car) to show the use of constructors 
*/ 
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    float price;
    int mileage;

public:
    // Constructor to initialize data members
    Car(string b, string m, float p, int mil) {
        brand = b;
        model = m;
        price = p;
        mileage = mil;
    }

    // Member function to display car details
    void display() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: Ksh " << price << endl;
        cout << "Mileage: " << mileage << endl;
    }

    // Member function to simulate driving
    void drive(int distance) {
        mileage += distance;
        cout << "After driving " << distance << " miles:" << endl;
        cout << "Updated Mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    //Car object 
    Car myCar("Toyota", "Corolla", 20000, 5000);
    
    // Function call
    myCar.display();
    
    // 150 miles output
    myCar.drive(150);
    
    // 300 miles output
    myCar.drive(300);
    
    return 0;
} 