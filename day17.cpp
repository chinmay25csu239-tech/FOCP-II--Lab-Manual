// // When the child class inherits from one or more class
// // protected data member and member function are accesible to derive clases but inaccesible to main function
// // while public data member are accessible to derive classes , all other classes (which are not derived and to the main function also)
// // but to access the public data , we always need an object

// // Private data is inaccessible to any other class , whether it's main, derived , underived 


// // #include <iostream>
// // using namespace std;
// // class A{
// //     public:
// //     void Show(){
// //         cout << " I am in Class A";
// //     }
// // };
// // class B{
// //     public:
// //     void Display(){
// //         cout << " I am in Class B";
// //     }
// // };
// // class C: public A, public B{
// //     public:
// //     void enter(){
// //         cout << " I am in Class C";
// //     }
// // };
// // int main(){
// //     C ob;
// //     ob.Show();
// //     ob.Display();
// //     ob.enter(); 
// // }


// // Question:- Create a class StudyMarks which stores the marks scored by a student in studies.
// //  Create a class ActivityMarks which stores the marks scored by a student in extracircular activites.
//   // Create a class TotalMarks which is derived from StudyMarks and ActivityMarks & and it stores the total marks as the sum of both.
//   // In main function , create an object of TotalMarks and call all the otehr functions which are present in base class. 

// #include <iostream>
// using namespace std;
// class StudyMarks{
//     protected: 
//     float marks; 
//     public:
//     void study_marks(){
//        cout << "Enter Study Marks:- ";
//        cin >> marks; 
//     }
// };
// class ActivityMarks{
//     protected:
//     float sportmarks; 
//     public:
//     void activity_marks(){
//         cout << "Enter sportsmark: ";
//         cin >> sportmarks; 
//     }
// };
// class TotalMarks: public StudyMarks, public ActivityMarks{
//     float totalmarks; 
//     public:
//     void enter(){
//         totalmarks = study_marks + activity_marks; 
//     }
// };
// int main(){
//     C ob;
//     ob.Show();
//     ob.Display();
//     ob.enter(); 
// } 


// // -----------------------------------------------------------------------------------------------------
// class A{int a1; protected;int a2;public;int a3;}
// class B{int b1;protected;int b2;public;int b3;}
// // ---------------------------------------------------------------------------------------------------
// Mode of inheriatnce :- Private, public, inheritance 
// Access Specifiers:- Acess, private, public
// 1. When we are deriving a class in private mode, all the private When we are inheriting A class in private mode All the public and protected data All the Private Become the private data of Derive the glass, protected and public data becomes the private data of derived class


#include<iostream>
using namespace std;
class Student{
    string name;
    float age;
    public:
    void displayDetails(){
        cout<<"enter name and age";
        cin>>name>> age;
    }
};
class StudyMarks:  virtual public Student{
    protected:
    float marks;
    public:
    void showMarks(){
        cout<<"enter the marks";
        cin>>marks;
    }
};

class ActivityMarks:  virtual public Student{
    protected:
    float sportsmarks;
    public:
    void showSportMarks(){
        cout<<"enter the sports marks";
        cin>>sportsmarks;
    }
};

class TotalMarks: public StudyMarks, public ActivityMarks{
    float totalmarks;
    public:
    void showTotalMarks(){
        totalmarks = marks + sportsmarks;
        cout<<"total  marks are : "<< totalmarks;

    }
};

int main (){
    TotalMarks t1;
    t1.displayDetails();
    t1.showSportMarks();
    t1.showTotalMarks();
return 0;
}
// When the child class recive the superbase property via 2 levels, the child class get the extra copy of super base class , data member and member function 
//Key Before the class Before the glass So that so that My child class So that my child loves Receives only One copy One copy of Super Bass Class 
//One copy of supervised class data members And L1 functions Data members and