/*Name: Morgan Muchira
Reg No: BCS-03-0093/2025
Description: Illustrating the use of Inheritance with parent and derived classes
for a banking system */
#include<iostream>
using namespace std;

class AccountHolder {
    protected: 
    string name;
    public:
    void setName(string n){
        name = n;
    };
    string getName(){
        return name;
    };
};
//Inherited class
class BankAccount: public AccountHolder{
    private:
        int accountNumber;
        double balance;
        public:
        // Constructor
    BankAccount(string n,int accountNo, double bal){
        setName(n);
        accountNumber = accountNo;
        balance = bal;
    };
    public:
      int getAccountNumber(){
        return accountNumber;
      };
        double getBalance(){
        return balance;
        };
};

class SavingsAccount: public BankAccount{
    private:
        double interestRate;
    public:
        // Constructor
        SavingsAccount(string n, int accountNo, double rate, double bal): BankAccount(n, accountNo, bal){
            interestRate = rate;
        };
        double getInterestRate(){
            return interestRate;
        };
};

int main(){
    SavingsAccount mySavings("John Doe", 12345, 5000.0, 2.5);
    cout << "Account Holder: " << mySavings.getName() << endl;
    cout << "Account Number: " << mySavings.getAccountNumber() << endl;
    cout << "Balance: Ksh " << mySavings.getBalance() << endl;
    cout << "Interest Rate: " << mySavings.getInterestRate() << "%" << endl;
    return 0;
};