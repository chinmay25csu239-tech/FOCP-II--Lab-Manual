#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    int start, end, i, j;
    int isPrime;

    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;

    for (i = start; i <= end; i++) {
        if (i < 2) continue;

        isPrime = 1; 
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime == 1) {
            cout << i << " ";
        }
    }

    return 0;
}