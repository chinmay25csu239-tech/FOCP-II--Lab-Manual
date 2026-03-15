#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int n, original, temp, sum = 0, length = 0;
    cin >> n;

    original = n;
    temp = n;   
    while (temp != 0) {
        temp = temp / 10;
        length++;
    }

    temp = n; 
    while (temp != 0) {
        int digit = temp % 10;      
        sum += pow(digit, length);  
        temp = temp / 10;         
    }
    if (sum == original) {
        cout << "Armstrong number detected!";
    } else {
        cout << "Not an Armstrong number."; 
    }

    return 0;
}