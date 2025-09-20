#include<iostream>
using namespace std;

// Function prototypes
float calculateGrossPay(float hoursWorked, float hourlyRate);
float calculateTaxes(float grossPay);

int main() {
    float hoursWorked, hourlyWage;
    
    // Input from users
    cout << "Enter hours worked in a week: ";
    cin >> hoursWorked;
    cout << "Enter hourly wage:Ksh  ";
    cin >> hourlyWage;

    // Calculations
    float grossPay = calculateGrossPay(hoursWorked, hourlyWage);
    float taxes = calculateTaxes(grossPay);
    float netPay = grossPay - taxes;
    
    // Output Results
    cout << "Gross Pay: Ksh " << grossPay << endl;
    cout << "Taxes: Ksh " << taxes << endl;
    cout << "Net Pay: Ksh " << netPay << endl;
    
    return 0;
}

// Function to calculate gross pay
// The function now correctly uses the hourlyRate parameter.
float calculateGrossPay(float hoursWorked, float hourlyRate) {
    float grossPay;
    if(hoursWorked <= 40) {
        grossPay = hoursWorked * hourlyRate;
    } else {
        float regularPay = 40 * hourlyRate;
        float overtimePay = (hoursWorked - 40) * hourlyRate * 1.5;
        grossPay = regularPay + overtimePay;
    }
    return grossPay;
}

// Function to calculate taxes
float calculateTaxes(float grossPay) {
    float taxes;
    if(grossPay <= 600 ){
        taxes = grossPay * 0.15; // 15% tax 
    } else {
        taxes = 600 * 0.15 + (grossPay - 600) * 0.20; // 20% tax on amount above 600
    }
    return taxes;
}
