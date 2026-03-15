#include <iostream>
#include <string> 
using namespace std; 
int main(){
    string op;
    cin >> op;
    if(op =="+"){
        int x1;
        int y1;
        cout << "Enter first number: ";
        cin >> x1;
        cout << "Enter second number: ";
        cin >> y1; 
        int sum = x1+y1;
        cout << sum; 
    }
    else if(op =="-"){
        int x2;
        int y2;
        cout << "Enter first number: ";
        cin >> x2;
        cout << "Enter second number: ";
        cin >> y2; 
        int difference = x2-y2;
        cout << difference; 
    } 
    else if(op =="x"){
        int x3;
        int y3;
        cout << "Enter first number: ";
        cin >> x3;
        cout << "Enter second number: ";
        cin >> y3; 
        int product = x3*y3;
        cout << product; 
    }
    else if(op =="/"){
        int x4;
        int y4;
        cout << "Enter first number: ";
        cin >> x4;
        cout << "Enter second number: ";
        cin >> y4; 
        int quiotent = x4*y4;
        cout << quiotent; 
    } 
    return 0;
}
