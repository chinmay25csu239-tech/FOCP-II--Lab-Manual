#include <iostream>
#include <math.h> 

using namespace std;
int main() {
    float a, b, c, d, r1, r2;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots: " << r1 << ", " << r2;
    } 
    else if (d == 0) {
        r1 = -b / (2 * a);
        cout << "Root: " << r1;
    } 
    else {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        cout << "Complex Roots: " << real << "+" << imag << "i and " << real << "-" << imag << "i";
    }
    return 0;
}