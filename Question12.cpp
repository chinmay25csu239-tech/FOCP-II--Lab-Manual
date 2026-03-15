#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cout << "Enter three sides: ";
    cin >> s1 >> s2 >> s3;
    if (s1 == s2 && s2 == s3) {cout << "Equilateral Triangle" << endl;}
    else if (s1 == s2 || s2 == s3 || s1 == s3) {cout << "Isosceles Triangle" << endl;}
    else {cout << "Scalene Triangle" << endl;}
    return 0;
}