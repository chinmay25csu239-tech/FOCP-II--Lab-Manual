#include <iostream>
using namespace std;

int main() {
    int year;
    int isLeap = 0; // 0 for False, 1 for True

    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeap = 1;
            } else {
                isLeap = 0;
            }
        } else {
            isLeap = 1;
        }
    } else {
        isLeap = 0;
    }

    if (isLeap == 1) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
} 