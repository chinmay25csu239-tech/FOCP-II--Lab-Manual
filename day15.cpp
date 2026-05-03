// // ****** PARAMETERISED CONSTRUCTOR IN INHERITANCE ********  // 


// // WAP to demonstarte the usage of constructors and single inheritance 
// class Base(){
//     public:
//     Base(){
//         cout << "Base class constructor";
//     }
// };
// class Derived(){
//     public:
//     Derived(){
//         cout << "Derived class constructor";
//     }
// };
// int main(){
//     Derived d;
//     return 0;
// }

// Whenever we create a derived class constructor, it is mandtory to create a base class constructor. 
// It is the reposibilty of derived class object to call the base class constructor also. 

// ** Derived class constructor initalises base class constructor first and then its own consructor. 


// WAP to print 2 numbers
// The first num -> initalised to base class constructor 
// The second num -> initalised to derived class constructor 
// #include <iostream>
// using namespace std;
// class Base{
//     int x;
//     public:
//     Base(int a){
//         x = a;
//         cout << x;
//     }
// };
// class Derived: public Base{
//         int y;
//         public:
//         Derived(int a,int b):Base(a){  // Base(int a) is initalising base class 
//             y = b;
//             cout << y; 
//         }
// };

// int main(){
//     Derived d(5,10);
//     return 0; 
// }

// WAP to print your father's name and age in base class and intailse it through base class cons
// In derived class, print your name and age through derived class
// #include <iostream>
// #include <string>
// using namespace std;
// class Base{
//     int x;
//     public:
//     Base(int fn , float af){
//         fn = "QWERT";
//         af = 2;
//         cout << fn << endl;
//         cout << af << endl;
//     }
// };
// class Derived: public Base{
//         int y;
//         public:
//         Derived(int a,int b):Base(a){  // Base(int a) is initalising base class 
//             y = b;
//             cout << y; 
//         }
// };

// int main(){
//     Derived d(5,10);
//     return 0; 
// }


// **** MULTI LEVEL INHERITANCE **** // 
// Private data is private to that particualr class only.
// It cannot be used by inherited class or outside the class (main function)
//protected data lies b/w private and public which means, it can be accessed bby inherited class 
#include <iostream>

using namespace std;
class Employee{
    string empName;
    int empId;
    public:
    void inputDetails(){
        cout << "Enter Empolyee name and Empolyee ID: " << endl;
        cin >> empName >> empId;
        cout << "Employee Name is: " << empName << endl;
        cout << "Empolyee ID is: " << empId;
    }
};
class Salary : public Employee{
    protected:
    float salary;
    public:
    void inputSalary(){
        cout << "Enter the salary of employee: ";
        cin >> salary;
        cout << "Salary of employee is: " << salary << endl; 
    }
}; 
class Bonus:public Salary{
    float bonus,totalSalary;
    public:
    void calculateTotalSalary(){
        totalSalary = salary + bonus;
        cout << "Total Salary is: " << totalSalary; 
    }
}; 
int main(){
    Bonus b1;
    b1.inputDetails();
    b1.inputSalary();
    b1.calculateTotalSalary();
    return 0; 
}