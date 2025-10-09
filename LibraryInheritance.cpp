/*Name: Morgan Muchira
Reg No: BCS-03-0093/2025
Description: Using base and derived classes to show inheritance
in a Library Management system*/

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

class LibraryMember : public Person {
    private:
        int memberID;
        int booksBorrowed;
    public:
        // Constructor
        LibraryMember(string n, int id, int books) {
            setName(n);
            memberID = id;
            booksBorrowed = books;
        }
        int getMemberID() {
            return memberID;
        }
        int getBooksBorrowed() {
            return booksBorrowed;
        }
};

class PremiumMember : public LibraryMember {
    private:
        double membershipFee;
    public:
        // Constructor
        PremiumMember(string n, int id, int books, double fee) : LibraryMember(n, id, books) {
            membershipFee = fee;
        }
        double getMembershipFee() {
            return membershipFee;
        }
};

int main() {
    PremiumMember myPremium("Alice Smith", 101, 5, 49.99);
    cout << "Member Name: " << myPremium.getName() << endl;
    cout << "Member ID: " << myPremium.getMemberID() << endl;
    cout << "Books Borrowed: " << myPremium.getBooksBorrowed() << endl;
    cout << "Membership Fee: Ksh " << myPremium.getMembershipFee() << endl;
    return 0;
}