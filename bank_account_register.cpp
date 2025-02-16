#include <iostream>
#include <string>
using namespace std;

// Simple Online Bank Account Registration Form

// Function to register a new bank account
void registerAccount() {
    string fullName, cnic, phoneNumber, email;

    cout << "\nMeezan Bank Online Account Registration\n";
    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter CNIC (without dashes): ";
    cin >> cnic;

    cout << "Enter Phone Number: ";
    cin >> phoneNumber;

    cout << "Enter Email Address: ";
    cin >> email;

    cout << "\nAccount Registered Successfully!\n";
    cout << "Name: " << fullName << "\n";
    cout << "CNIC: " << cnic << "\n";
    cout << "Phone: " << phoneNumber << "\n";
    cout << "Email: " << email << "\n";
}

int main() {
    // Register a new account
    registerAccount();

    return 0;
}
