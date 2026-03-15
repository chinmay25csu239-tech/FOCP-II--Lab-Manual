#include <iostream>
#include <climits>
using namespace std;

int main() {
    int stock[5], max1 = INT_MIN, max2 = INT_MIN;
    for(int i = 0; i < 5; i++) {
        cin >> stock[i];
        if(stock[i] > max1) {
            max2 = max1;
            max1 = stock[i];
        } else if(stock[i] > max2 && stock[i] != max1) {
            max2 = stock[i];
        }
    }
    cout << "Largest: " << max1 << "\nSecond Largest: " << max2;
    return 0;
}