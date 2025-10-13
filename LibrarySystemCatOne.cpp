/*Name: Morgan Muchira
Reg.No: BCS-03-0093/2025
Description: Library Management System Task for Cat One */
#include<iostream>
using namespace std;

class Person {
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

class LibraryMember: public Person{
    private:
        int memberID;
        int booksBorrowed;
    public:
    // Constructor
    LibraryMember(string n, int id, int books){
        setName(n);
        memberID = id;
        booksBorrowed = books;
    };
    public:
      int getMemberID(){
        return memberID;
      };
        int getBooksBorrowed(){
        return booksBorrowed;
        };
};

class PremiumMember: public LibraryMember{ 
    private:
        double membershipFee;
    public:
        // Constructor
        PremiumMember(string n, int id, int books, double fee): LibraryMember(n, id, books){
            membershipFee = fee;
        };
        double getMembershipFee(){
            return membershipFee;
        };
};

int main() {
    // LibraryMember object
    LibraryMember member("Alice", 101, 3);
    cout << "Library Member Details:" << endl;
    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;

    // PremiumMember object
    PremiumMember premium("Bob", 202, 5, 49.99);
    cout << "\nPremium Member Details:" << endl;
    cout << "Name: " << premium.getName() << endl;
    cout << "Member ID: " << premium.getMemberID() << endl;
    cout << "Books Borrowed: " << premium.getBooksBorrowed() << endl;
    cout << "Membership Fee: Ksh " << premium.getMembershipFee() << endl;
 return 0;
};