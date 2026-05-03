// // THIS POINTER 
// When the class data member name and arugment name are same , we make use of this pointer to make our complier understand 
// that this variable is a class data member and not the arugment which were been passed as the parameter. 
// we keep the data member name and arugment name same to avoid any confusion by the end user which is 

// Good praticse to use same data member and name 
// #include <iostream> 
// #include <string>
// using namespace std; 
// class abc
// {
//     string name;
//     int age;
//     public:
//     abc(string name, int age)
//     {
//         this -> name = name; 
//         this -> age = age;
//     }
// };

// int main()
// {
//     abc a1("Rahul",20);
// }

// // dyanmic memory allocation 
// In DMA , in C++, is done using 
// 1) new operator 2) delete operator 

// New operator  used to dyanmically allocate the memory while delete operator is used to deallocate the memory or earse the memory which has been allocated by new 


// WAP a program to print the numbers in an array using DMA 

// #include <iostream>
// using namespace std;
// int main(){
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     int *ptr = new int[size]; // pointer is a pointer variable which will store the base address of my array. Once I get the BA, we can iterate through the entire array
//     for(int i =0;i<size;i++){
//         cin >> ptr[i];
//         cout << ptr[i];
//     }
//     delete [] ptr;  // keyword will delete the memory occupied by the variable in the program . If we do not delete the memory, occupied by variable, my system will automatcially do it once it is shut down
// }


// Pure virtual function is a function which is only declared in the base class and there is no defination of that function, in the base class. 
// When a pure virtual functioon is declared in the base class, it becomes mandtory for derived classes to implemnet that function.
// It is written as "virtual show() =0"

// Friend function 
// This function to access the private and protected data of a class. As we know that the private data of class, cannot be accessed by members which are present outside the class,
// but  there can be certain circumstances, where we need to access the private data. In this case, we make use of a friend function 
// A friend function does not belong to any of the class (not in the scope of any class ), 
//Since it is not in the scope of any class, it cannot be called by using the object of any class. it is called like a normal function
// We have to declare all the classes which are using the friend function and this is known as forward decelartion 

#include <iostream>
using namespace std;

class xyz; // fwd. decleration 
class abc{
    int num1;
    public:
    abc(int x){
        num1 = x;
    }
    friend void add(abc,xyz);
};
class xyz{
    int num2;
    public:
    xyz(int y){
        num2 = y;
    };
    friend void add(abc,xyz);
};
void add(abc a1,xyz x1){
    int sum; // local variable 
    sum = a1.num1+ x1.num2;
    cout << sum;
}
int main(){
    abc a1(10);
    xyz x1(20);
    add(a1,x1); 
}

/* Operator overloading -> It means we can We can make some of the operators Different functions
for eg ) plus operator can add two aribtary number . it can add  two objects and strings too. 
  * is used for declaring pointer variable and it is also used as the derefrencing operator.
  Some of the operator cannot be overloaded such as new, delete, scope resolution operator, 
*/

// WAP to add two objects using OOL

// class Sample{
//     int num;
//     public:  
//     Sample(int x =0){ // default arugment, when we will not pass any variable, the number will be initialised to zero by default.Whenever, we return an object, the return type should be class name & vice-versa 
//         num =x ;
//     }
//     Sample operator + (Sample x1){ // local object 
//         Sample temp;
//         temp.num = num + x1.num; // num = s1 & x1.num = s2
//         return temp;
//     }
// }

// s1 is calling + operator and s2 is passed as an arugment in operator function. The value of s2 will be passed on to x1

// Operator overloading by using friend function 
// When we will overload the operator, by using friend function , in that case, two class objects will be passed as an arugments and they are able to work on oprator overloading.

class Sample
{
    int num;
    public:
    Sample(int x =0){
        num = x;
    }
    friend Sample add(Sample,Sample);
    void display()
    {
        cout << num;
    }
};
Sample add (Sample s1, Sample s2)
{
    Sample temp;
    temp num = s1.num + s2.num;
    return temp;
}
int main(){
    Sample s1(20);
    Sample s2(40);
    Sample s3;
    s3 = add(S1,S2); 
    s3.display(); 
}

// Next week project synthosis 