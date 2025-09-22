/*Name: Morgan Muchira
Reg No:BCS-03-0093/2025
Description: Product of three numbers using classes and objects
*/
#include<iostream>
using namespace std;

class Product{
    public:
    float num1, num2, num3;
    // member function
    double calculateProduct(){
        return num1 * num2 * num3;
    };
};

int main() {
    Product prod1;
    int TotalProduct;
    prod1.num1 = 22;
    prod1.num2 = 30;
    prod1.num3 = 50;

    TotalProduct = prod1.calculateProduct();
    cout<<"The product of the three numbers is "<<TotalProduct <<endl;
    return 0;
}