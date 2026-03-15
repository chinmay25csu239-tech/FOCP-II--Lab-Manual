#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void displayPrimes(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
bool isPasswordValid(string password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "@#$%!&*";

    if (password.length() < 8) return false; // Basic length check

    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else if (specialChars.find(c) != string::npos) hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    int l1 = 10, l2 = 50;
    displayPrimes(l1, l2);
    string pw1 = "Secure#123";
    string pw2 = "weak";
    
    cout << "Password '" << pw1 << "' valid: " << (isPasswordValid(pw1) ? "Yes" : "No") << endl;
    cout << "Password '" << pw2 << "' valid: " << (isPasswordValid(pw2) ? "Yes" : "No") << endl;

    return 0;
}
