#include <iostream>
#include <string>

using namespace std;

int main() {
    string id;
    int isPalindrome = 1; // Flag: 1 for true, 0 for false

    cout << "Enter ID: ";
    cin >> id;
    int len = id.length();
    for (int i = 0; i < len / 2; i++) {
        if (id[i] != id[len - 1 - i]) {
            isPalindrome = 0; 
            break;     
        }
    }

    if (isPalindrome == 1) {
        cout << id << " is a Palindrome." << endl;
    } else {
        cout << id << " is NOT a Palindrome." << endl;
    }

    return 0;
}