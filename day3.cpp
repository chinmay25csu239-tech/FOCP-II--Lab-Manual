// // // // // WAP to add 2 numbers using classes and object 
// // // // #include <iostream> 
// // // // using namespace std;
// // // // class Addition{
// // // //     int a,b; 
// // // //     int sum;// data 
// // // //     public:
// // // //     void getData(); // function 
// // // //     void Display(); // function 
// // // //  };
// // // // void Addition::getData(){   // class : function
// // // //     cout << "Enter first number: ";
// // // //     cin >> a; 
// // // //     cout << "Enter secoond number: ";
// // // //     cin >> b;
// // // // } 
// // // // void Addition::Display(){  // class : function
// // // //     sum = a+b;
// // // //     cout << "Sum of two no is : " << sum;
// // // // }
// // // // int main(){  // normal procedure 
// // // //     Addition a1;
// // // //     a1.getData();
// // // //     a1.Display();
// // // //     return 0; 
// // // // }
// // // // // a1 -> object of type 'Addition' (in this case)


// // // #include <iostream>
// // // using namespace std;
// // // class Add{
// // //     int a,b,c;
// // //     int sum;
// // //     int avg;
// // //     public: 
// // //     void getdata();
// // //     void CollectData();
// // //     void Average();
// // //     void Display();
// // // };
// // // void Add :: getdata(){
// // //     cout << "Enter first mark: ";
// // //     cin >> a;
// // //     cout << "Enter second mark: ";
// // //     cin >> b;
// // //     cout << "Enter third mark : ";
// // //     cin >> c;
// // // }
// // // void Add :: CollectData(){
// // //     sum = a+b+c;
// // // }
// // // void Add :: Average(){
// // //     avg = sum/3;
// // // }
// // // void Add :: Display(){
// // //     cout << "Average : " << avg;
// // // }
// // // int main(){
// // //     Add a2; 
// // //     a2.getdata();
// // //     a2.CollectData();
// // //     a2.Average();
// // //     a2.Display();
// // // }

// // #include <iostream>
// // using namespace std;
// // class Area{
// //     private:
// //     float r;
// //     float area;
// //     float pi = 3.14;
// //     public:
// //     void getData();
// //     void calculate();
// // };
// // void Area :: getData() {
// //     cout << "Enter radius : ";
// //     cin >> r;
// // }
// // void Area :: calculate(){
// //     area = r * pi * pi;
// //     cout << "The area: " << area;
// // }
// // int main(){
// //     Area a3;
// //     a3.getData();
// //     a3.calculate();
// // }

// #include <iostream> 
// using namespace std;
// class Temp{
//     int c;
//     int f; 
//     int cf;
//     int fc;
//     public:
//     void getData();
//     void Display();
// };
// void Temp :: getData(){
//     cout << "Enter the temp in celusius : ";
//     cin >> c;
//     cout << "Enter the temp in fahreint : ";
//     cin >> f;
// }
// void Temp :: Display(){
//     cf = (c - 32) * 5/9;
//     fc = (f* 9/5) + 32; 
//     cout << "The degree in fahreint: " << cf <<endl;
//     cout << "The degree in celusius:  " << fc <<endl;
// }
// int main(){
//     Temp a4;
//     a4.getData();
//     a4.Display();
// }

#include <iostream>
using namespace std;
class discount{
    private:
    float p;
    int q;
    float TP;
    int dis = (20*TP)/100; 
    public:
    void getData();
    void DisplayData();
};
void discount :: getData(){
    cout << "Enter price: ";
    cin >> p;
    cout << "Enter quantity: ";
    cin >> q;
    TP = p * q;
    
}
void discount :: DisplayData(){
    float fp = TP - dis;
    cout << "Total price:- " << TP;
    cout << "Discount applied :- 20 " << endl;
    cout << "Final Price(after discount) " << fp;
}
int main(){
    discount a5;
    a5.getData();
    a5.DisplayData();
}