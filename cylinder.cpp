/*Name: Morgan Muchira
Reg No:BCS-03-0093/2025
Desc: Surface area and volume of a cylinder with classes and objects
*/
#include<iostream>
using namespace std;

class cylinder{
    public:
    float radius, height;
    // member functions
    // volume = πr^2h
    // surface area = 2πr2 + 2πrh
    double volume(){
        return 3.14 * radius* radius * height;
    };
    double surfaceArea(){
        return 2 * 3.14 * radius * radius * height + 2 * 3.14 * radius * height;
    };
};

int main() {
    cylinder cyl1;
    cyl1.radius = 5;
    cyl1.height = 10;

    cout<<"The volume of the cylinder is "<<cyl1.volume()<<endl;
    cout<<"The surface area of the cylinder is "<<cyl1.surfaceArea()<<endl;
    return 0;
}