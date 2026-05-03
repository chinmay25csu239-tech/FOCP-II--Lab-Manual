// #include <iostream> // input and output steam 
// using namespace std;
// int main(){
//     cout << 12;
//     cout << 11;
// }

// // AND

// #include <iostream>
// using namespace std;
// int main(){
//     cout << 12 << endl;
//     cout << 11; 
// }

// instance variable --> used in class 

// #include <iostream>
// #include <string> 
// using namespace std;

// class Candy {
//     string color;
//     int points;

// public:
//     void setCandy(string c, int p) { 
//         color = c;
//         points = p;
//     }

//     void displayCandy() {
   
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


// Q2. Explain the debugging process you followed, the errors found, and the specific changes made to make the code executable. Hourglass Pattern
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     for(int i = n; i >= 1; i--) {
//         for(int s = 1; s <= n-i; s++){
//         cout << " ";
//         }
//         for(int j = 1; j <= 2*i-1; j++){
//         cout << "*";
//         }
//         cout<<endl;
// }
// for(int i = 1; i < n; i++) {
//     for(int s = 1; s <=n-i; s++){
//     cout << " ";
//     }
//     for(int j = 1; j <= 2*i-1; j++)
//         cout << "*";
//     cout << endl;
// }
// return 0;
// }

#include <iostream> 
using namespace std;
double volume(double r, int h){ return 3.14*r*r*h;} // Volume of cyclinder 
int volume(int l,int b, int h){return l*b*h;} // Volume of cuboid 
int volume(int s){return s*s*s;} // Volume of cube
int main(){
    cout << volume (6) << endl;
    cout << volume (9,245.8) << endl;
    cout << volume (9,15,89); 
}