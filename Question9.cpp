#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= '0' && ch <= '9') {cout << ch << " is a number." << endl;}
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {cout << ch << " is a vowel." << endl;} 
        else {cout << ch << " is a consonant." << endl;}
    }
    else {cout << ch << " is a special symbol." << endl;}
    return 0;
}