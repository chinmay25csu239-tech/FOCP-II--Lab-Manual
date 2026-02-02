// #include <iostream>
// using namespace std; 
// class Addition{
//     int num1,num2;
//     int sum;
//     public: 
//     void getData(){
//         cout << "Enter first number";
//         cin >> num1;
//         cout << "Enter second number";
//         cin >> num2;
//     }
//     void sumNumber(){
//         sum = num1+num2;
//         cout << "The sum if two numbers is " << sum;
//     }
// };
// int main(){
//     Addition obj;
//     obj.getData(); 
//     obj.sumNumber();
//     return 0;

// }

// // WAP if an indian citizen to cast their vote using classes and object
// // #include <iostream> 
// // using namespace std;
// // class Vote{
// //     int age;
// //     public: 
// //     void getData(){
// //         cout << "Enter age: ";
// //         cin >> age;
// //     }
// //     void Tell(){
// //         if (age >=18){
// //             cout << "You can vote! ";
// //         }
// //         else{
// //             cout << "You cannot vote! "; 
// //         }
// //     }
// // }; 
// // int main(){
// //     Vote obj2;
// //     obj2.getData();
// //     obj2.Tell();
// //     return 0;  
// // }

// #include <iostream> 
// using namespace std;
// class Fast{
//     int n1,n2,n3;
//     public: 
//     void getData(){
//         cout << "Enter score of 1st player " ;
//         cin >> n1;
//         cout << "Enter score of 2nd player " ;
//         cin >> n2; 
//         cout << "Enter score of 3rd player " ;
//         cin >> n3;
//     }
//     void Find(){
//         if (n1 >= n2 && n1 >= n3) {cout << n1;}
// else if (n2 >= n1 && n2 >= n3) {cout << n2; }
// else {cout << n3;}
//     }
// };
// int main(){
//     Fast obj3;
//     obj3.getData();
//     obj3.Find();
//     return 0;
// }

// NOT COMPLETE 

#include <iostream> 
using namespace std;
class Monitor{
    int n; 
    public: 
    void getData(){
        cout << "Enter number:- " ;
        cin >> n;
    }
    void Alaram(){
        string tag;
        if(n%3 == 0){tag = 'Buzz'; cout << tag;}
        else if(n%5 == 0){tag = 'Fuzz'; cout << tag;}
        else if(n%3 == 0 && n%5 == 0){tag = 'Buzz | Fuzz'; cout << tag;}
        else{tag = 'Not valid'; cout << tag;}
    }
}; 
int main(){
    Monitor obj4;
    obj4.getData();
    obj4.Alaram();
    return 0;
}