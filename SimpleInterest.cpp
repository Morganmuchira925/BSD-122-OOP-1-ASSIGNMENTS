/*Name: Morgan Muchira
Reg No: Bcs-03-0093/2025
Description: Calculate simple interest using function calls, prototype and declaration 
*/
#include<iostream>
using namespace std;

// Function prototypes
float simple_Interest(float rate, float time, float principal);
float discount(float p_a); // Use float for purchase amount

int main() {
    float s_interest;
    float p_a;
    float rate, time, principal;
    float disc;

    // Input values for simple interest calculation
    cout << "Enter rate(%), time in years, and principal amount: " << endl;
    cin >> rate >> time >> principal;

    // Calculate simple interest
    s_interest = simple_Interest(rate, time, principal);
    cout << "The Simple Interest is: " << s_interest << endl;

    // Input purchase amount for discount calculation
    cout << "Enter the purchase amount: " << endl;
    cin >> p_a;

    // Calculate discount
    disc = discount(p_a);
    cout << "The discount on the purchase is: " << disc << endl;

    return 0;
}

// Function to calculate simple interest
float simple_Interest(float rate, float time, float principal) {
    return (rate * time * principal) / 100;
}

// Function to calculate discount based on purchase amount
float discount(float p_a) {
    if (p_a < 1000.0f) {
        return 0.0f; // No discount
    } else if (p_a >= 1000.0f && p_a <= 5000.0f) {
        return p_a * 0.05f; // 5% discount
    } else if (p_a > 5000.0f) {
        return p_a * 0.10f; // 10% discount
    }
    return 0.0f; // Default case
}
