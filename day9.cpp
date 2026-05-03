// Design a c++ program that simulates a basic Candy crush game  elem using elem class and object creation
// create a class candy with following attrubutes :
// String color:- stores the colour of candy 
// String points:- stores point award 
// Class should have the following member:
// 1. setCandy(string c,int p):- Sets the color and points of candy 
// 2. displayCandy():- Display color & points  

// #include <iostream>
// #include <string> 
// using namespace std;

// class Candy {
//     // These are private by default
//     string color;
//     int points;

// public:
//     void setCandy(string c, int p) { 
//         color = c;
//         points = p;
//     }

//     void displayCandy() {
//    
//         cout << "The colour of candy: " << color << endl;
//         cout << "The points of candy: " << points << endl;
//     }
// }; 

// int main() {
//     Candy c1; 
//     c1.setCandy("Red", 9); 
//     c1.displayCandy();

//     return 0;
// }


// ------------------------------------------------------------------------------------------------------------------//
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    // Private by default
    int acN;
    string ahN;
    float bal;
public:
    void createAccount(int id, string name, float initialBalance) {
        acN = id;
        ahN = name;
        bal = initialBalance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            bal += amount;
            cout << "Successfully deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= bal) {
            bal -= amount;
            cout << "Requested money withdrawn!" << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayDetails() {
        cout << "--- Account Details ---" << endl;
        cout << "Account Number: " << acN << endl;
        cout << "Account Holder: " << ahN << endl;
        cout << "Current Balance: $" << bal << endl;
    }
}; // Added missing semicolon

int main() {
    BankAccount b1;
    
    // Using the correct method names defined in the class
    b1.createAccount(123, "Chinmay", 500.0); 
    b1.displayDetails();
    
    b1.deposit(150.50);
    b1.withdraw(100.0);
    
    b1.displayDetails();

    return 0; 
}

