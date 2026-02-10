// WAP to add two numbers using function 
// #include <iostream>
// using namespace std;
// class Addition{
//     public: 
//     int sum(int a , int b){
//         return a+b;
//     }
// };
// int main(){
//     Addition a1; 
//     int sum_two = a1.sum(8,9);
//     cout << sum_two; 
//     return 0;
// }

// Check prime numbers
// #include<iostream>
// using namespace std;
// class Prime{
//     private:
//     int n;
//     public:
//     void getdata(){cout<<"Enter number:";cin>>n;}
//     void checkdata(){
//         for(int i=2;i<n;i++){
//             if(n%i==0){cout<<"number is composite";break;}
//             else{cout<<"number is prime";break;}
//     }
// }
// };
// int main(){
//     Prime c;
//     c.getdata();
//     c.checkdata();
//     return 0;
// }

// Calculate based on input by user
// #include <iostream>
// #include <string> 
// using namespace std; 
// int main(){
//     string op;
//     cin >> op;
//     if(op =="+"){
//         int x1;
//         int y1;
//         cout << "Enter first number: ";
//         cin >> x1;
//         cout << "Enter second number: ";
//         cin >> y1; 
//         int sum = x1+y1;
//         cout << sum; 
//     }
//     else if(op =="-"){
//         int x2;
//         int y2;
//         cout << "Enter first number: ";
//         cin >> x2;
//         cout << "Enter second number: ";
//         cin >> y2; 
//         int difference = x2-y2;
//         cout << difference; 
//     } 
//     else if(op =="x"){
//         int x3;
//         int y3;
//         cout << "Enter first number: ";
//         cin >> x3;
//         cout << "Enter second number: ";
//         cin >> y3; 
//         int product = x3*y3;
//         cout << product; 
//     }
//     else if(op =="/"){
//         int x4;
//         int y4;
//         cout << "Enter first number: ";
//         cin >> x4;
//         cout << "Enter second number: ";
//         cin >> y4; 
//         int quiotent = x4*y4;
//         cout << quiotent; 
//     } 
//     return 0;
// }


// Perfect or  Armstrong 
// #include <iostream>
// #include <math.h> 
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int length =0;
//     while(n!=0){
//         n=n/10;
//         n=n%10;
//         length++;
//     }
//     int sum=0;
//     for(int j=0;j<length;j++){
//         n=n/10;
//         sum += pow(n,length);
//         n=n%10;
//     }
//     if(sum == n){
//         cout << "Armstrong number detected! ";
//     }
//     else{
//         cout << "Perfect number detected! "; 
//     }
//     return 0;
//  }
// Above code will be corrected and will be updated in day7.cpp 

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<4;i++){
//         cout << "1 2 3 4 5" << endl;
//     }
//     return 0; 
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number ::: ";
    cin >> n;
    for(int i=1;i<n;i++){
        for(int i =1;i<n;i++){
            cout << i;
        }
        cout << " " << endl; 
    }
    return 0; 
}
// Above code will be corrected and will be updated in day7.cpp 