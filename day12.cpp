// Constructors are the  special member function that are used to intalise the object. 
// It has the same name as that of a class 
// Constructors do not have a 'return' type , not even 'void'.
// They are always declared in the public section of the class 
// if we have not created a constructor, using class , compiler will automatically create a default constructor which intalises the variable to some garbage value.

// 3 types of constructors 
/// 1. Default - No arugments  -> Is the one which contains no arugments, is automatcially created if we do not create. 
/// 2. Paramterisized -- With arugments --> Is the one which contains a list of parameters or arugments. These arugments are used to intalise the data members of that particular class. 
/// 3. Copy -- Copy of object as an arugment --> Is the one which takes reference of another object as a parameter. In this, the values of one object is entirely copied into another object. 

// Q:- Create a class s'student' with data members (name,marks). Use a constructor to intalise the values and display the student details using a member function.

// #include <iostream> 
// #include <string.h> 
// using namespace std; 
// class Student{
//     string name;
//     int marks;
//     public:
//     Student(){                         // Constructor 
//         name = "Rahul";
//         marks = 81; 
//     }
//     void display(){
//         cout << name << endl;
//         cout << marks; 
//     }
// };
// int main(){
//     Student s1;
//     s1.display(); 
// }

// Q:- Create another constructor which takes two parameters and intalising the data member.
// #include <iostream> 
// #include <string.h> 
// using namespace std; 
// class Student(string n, int m){
//     name = n;
//     marks = m;
//     public:
//     void display(){
//         cout << name << endl;
//         cout << marks; 
//     }
// };
// int main(){
//     Student s1;
//     Student s2("Ram",85); 
//     s1.display(); 
//     s2.display(); 
// }
 // Constructor overloading where we are defining more than 1 constructor but every constructor is doing different task,
//Number of arugments or , if the no of arugments is same 
// If the data type of every arugment is same , the order of arugment shall be different. 
// For eg) if first integer is taking , the second constructor may take double , int 
// Destrctor are used to destroy the object and release the memory which is occupied by the object 
// Destrcutors are automatically called when we close the program, we can explicitly 
// Destrcutor also has . They are followed by wave 


// Design a class car that has attributes (brand and price). Write constructor and display
// #include <iostream> 
// #include <string.h> 
// using namespace std; 
// class Car{
//     string brand;
//     int price;
//     public:
//     Car(){                       
//         brand = "Mahindra";
//         price = 1800000; 
//     }
//     void display(){
//         cout << brand << endl;
//         cout << price; 
//     }
// };
// int main(){
//     Car c1;
//     c1.display(); 
// }

// // Design a class Rectangle that has attributes (length and breadth). Write constructor and display 
// #include <iostream> 
// #include <string.h> 
// using namespace std; 
// class Rectangle{
//     int length;
//     int breadth;
//     public:
//     Rectangle(){                         // Constructor 
//         length = 20;
//         breadth = 81; 
//     }
//     void display(){
//         cout << length << endl;
//         cout << breadth<< endl;
//         cout << "Area == " << length*breadth;  
//     }
// };
// int main(){
//     Rectangle a1;
//     a1.display(); 
// }

#include <iostream>
using namespace std;
class Employee {
    int emp_id;
    int salary;
public:
    Employee(int e, int s) {
        emp_id = e;
        salary = s;
    }
    void display() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee o1(31, 3000); 
    o1.display(); 

    return 0;
}
// // Define class BankAccount with acc no & bal. Use constructor to set inital balance

// #include <iostream> 
// #include <string.h> 
// using namespace std; 
// class BankAccount{
//     int account_number;
//     int inital_bal;
//     public:
//     BankAccount(){                       
//         account_number = 23449083;
//         inital_bal = 81; 
//     }
//     void display(){
//         cout << account_number << endl;
//         cout << inital_bal; 
//     }
// };
// int main(){
//     BankAccount b1;
//     b1.display(); 
// }