
// Polymorphism  -> Compile time & Run time 
// Compile time -> function overloading ; operator overloading 
// Run time --> 

// Run time When my object  Skype when my object decides Which function to call When my object dec Which function to call Which function to call during runtime
// I find the object does not know Object does not know Which fun Is to be called n Object does not know which function is to be called nn During compile time During compile time
// It is achieved 
// it is achieved Method overriding.
// Method overiding means overriding the same function in derived class and it shall have the same name, same no of arugments , entirely same signature as that of 
// base class . But we can define the functionality in a different way than base class. 


#include <iostream>
using namespace std; 
class Base
{
    public:
    virtual void show()
    {
        cout << " You are in base class.";
    }
};
class Derived : public Base
{
    public:
    void show()
    {
        cout << "You are in derived class";
    }
};
int main()
{
    Base *B; // * is a pointer 
    Derived d;
    B = &d;
    B -> show(); 
}

// To implement virtual function (function overwirting\runtime polymorphsion\ dynamic time polymorphsion),
// We need   a base class pointer and derived class object 
// base class pointer is storing the address of derived class object
// When we use virtual keyword in base class , the base pointer will always call the derived class method 
// if it stores the reference of derived class object